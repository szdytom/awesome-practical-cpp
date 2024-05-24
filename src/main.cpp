#include <fmt/core.h>
#include <nlohmann/json.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <string_view>
#include <vector>
#include <memory>
#include <map>
#include <filesystem>
#include <set>
#include <algorithm>

std::string title_to_anchor(std::string_view title) {
	// Example: Awesome C++ -> awesome-c--
	std::string anchor;

	for (auto c : title) {
		if (std::isalpha(c)) {
			anchor += std::tolower(c);
		} else if (c >= '0' && c <= '9') {
			anchor += c;
		} else {
			anchor += '-';
		}
	}

	return anchor;
}

std::string string_to_lower(std::string str) {
	std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });
	return str;
}

nlohmann::json read_json_file(std::string_view filename) {
	std::ifstream file(filename.data());
	if (!file.is_open()) {
		throw std::runtime_error(fmt::format("Cannot open file: {}", filename));
	}

	nlohmann::json json;
	file >> json;

	return json;
}

enum class EmojiIcon {
	NONE,
	ZAP,
	CONSTRUCTION,
};

EmojiIcon parse_icon(std::string_view icon) {
	if (icon == "zap") {
        return EmojiIcon::ZAP;
    } else if (icon == "construction") {
        return EmojiIcon::CONSTRUCTION;
    } else if (icon.empty()) {
        return EmojiIcon::NONE;
    }
	throw std::runtime_error(fmt::format("Invalid icon: {}", icon));
}

std::string icon_to_string(EmojiIcon icon) {
    switch (icon) {
        case EmojiIcon::ZAP:
            return " :zap:";
        case EmojiIcon::CONSTRUCTION:
            return " :construction:";
        default:
            return "";
    }
}

struct Repository {
	std::string owner, name;
	std::string description;
	EmojiIcon icon;

	Repository(std::string_view path, std::string_view description, std::string_view icon):
		description(description), icon(parse_icon(icon)) {
		// parse path (owner/name)
		auto pos = path.find('/');
		if (pos == std::string_view::npos) {
			throw std::runtime_error("Invalid repository path");
		}
		owner = std::string(path.substr(0, pos));
		name = std::string(path.substr(pos + 1));
	}

	static Repository from_json(const nlohmann::json& json) {
		std::string path = json["path"];
		std::string description = json["description"];
		std::string icon = json["icon"];

		return Repository(std::move(path), std::move(description), std::move(icon));
	}

	std::string path() const noexcept {
		return fmt::format("{}/{}", owner, name);
	}

	std::string repo_url() const noexcept {
		return fmt::format("https://github.com/{}", path());
	}

	std::string star_badge_url() const noexcept {
		return fmt::format("https://img.shields.io/github/stars/{}?style=flat-square", path());
	}

	std::string license_badge_url() const noexcept {
		return fmt::format("https://img.shields.io/github/license/{}?style=flat-square", path());
	}

	std::string to_markdown() const noexcept {
		// e.g. [path](url) :icon: - description star-badge license-badge
		return fmt::format("- [{}]({}){} - {}. ![stars]({}) ![license]({})", path(), repo_url(), icon_to_string(icon), description, star_badge_url(), license_badge_url());
	}

	// Move constructors
	Repository(Repository&&) = default;
	Repository& operator=(Repository&&) = default;

	// Copy constructors
	Repository(const Repository&) = default;
	Repository& operator=(const Repository&) = default;

	// Compare operator
	// Compare by lower case
	bool operator<(const Repository& other) const noexcept {
		return string_to_lower(path()) < string_to_lower(other.path());
	}
};

template <typename T>
struct SharedPtrCompare {
    bool operator()(const std::shared_ptr<T>& a, const std::shared_ptr<T>& b) const noexcept {
        return *a < *b;
    }
};

struct Topic {
	std::string name;
	std::set<std::shared_ptr<Repository>, SharedPtrCompare<Repository>> repositories;

	Topic(std::string_view name): name(name) {}

	void add_repository(std::shared_ptr<Repository> repo) {
		repositories.insert(repo);
	}

	std::string to_markdown() const {
		std::string markdown;

		markdown += fmt::format("## {}\n\n", name);

		for (const auto& repo : repositories) {
			markdown += repo->to_markdown() + "\n";
		}

		markdown += "\n";
		return markdown;
	}

	std::string anchor() const {
		return title_to_anchor(name);
	}
};

struct TopicList {
	std::map<std::string, std::shared_ptr<Topic>> topics;

	std::shared_ptr<Topic> get_or_create(const std::string& name) {
		auto it = topics.find(name);
		if (it != topics.end()) {
			return it->second;
		}

		auto topic = std::make_shared<Topic>(name);
		topics.emplace(name, topic);
		return topic;
	}

	std::string build_toc() const {
		std::string toc;

		toc += "## Contents\n\n";

		toc += "- [Awesome Practical C++](#awesome-practical-c--)\n";
		for (const auto& [name, topic] : topics) {
			toc += fmt::format("\t- [{}](#{})\n", name, topic->anchor());
		}

		return toc;
	}

	std::string to_markdown() const {
		std::string markdown;

		markdown += build_toc();
		markdown += "\n";

		for (const auto& [name, topic] : topics) {
			markdown += topic->to_markdown();
		}

		return markdown;
	}
};

std::string read_plain_file(std::string_view filename) {
	std::ifstream file(filename.data());
	if (!file.is_open()) {
		throw std::runtime_error(fmt::format("Cannot open file: {}", filename));
	}

	std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	return content;
}

int main() {
	TopicList topics;
	// Load every json file under data/ folder and construct Repository from them
	for (const auto& entry : std::filesystem::directory_iterator("data")) {
		if (entry.is_regular_file() && entry.path().extension() == ".json") {
			nlohmann::json content = read_json_file(entry.path().generic_string());
			auto repo = std::make_shared<Repository>(Repository::from_json(content));

	        for (const auto& topic : content["topics"]) {
                std::string topic_name = topic.get<std::string>();
                auto repo_topic = topics.get_or_create(topic_name);
                repo_topic->add_repository(repo);
            }
		}
	}

	std::cout << read_plain_file("prefix.md");
	std::cout << topics.to_markdown();
	std::cout << read_plain_file("suffix.md");

	return 0;
}
