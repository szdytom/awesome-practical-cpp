# Awesome Practical C++

A filtered list of the most practical and recognized C++ frameworks and libraries that are production ready...

Finding a suitable library from [fffaraz/awesome-cpp](https://github.com/fffaraz/awesome-cpp) can be maddening -- there are so many repositories listed, some of them have been abandoned for years, some of them are just toys instead, true treasure was buried in tons of other stuffs. In this repository, I'd like to list repository which:

1. ...is a library/framework (not documentations, blogs, demo/example code, applications)
2. ...is well recognized (2K stars at least)
3. ...is still been maintained/developed (commited recently)
4. ...is ready for use (not WIP)
5. ...is wrote in C++ or has a *friendly* C++ API
6. ...is open-source and hosted(at least mirrored) on Github.

Please feel free to open a PR and add things to the list!

- [Awesome Practical C++](#awesome-practical-c--)
	- [CLI](#cli)
	- [Debugging](#debugging)
	- [Formatting](#formatting)
	- [Game Utility](#game-utility)
	- [Image Processing](#image-processing)
	- [JSON](#json)
	- [Networking](#networking)
	- [Scripting](#scripting)
	- [TUI](#tui)
	- [XML](#xml)

## CLI

- [p-ranav/argparse](https://github.com/p-ranav/argparse): A header-only argument parser for Modern C++ ![stars](https://img.shields.io/github/stars/p-ranav/argparse?style=flat-square) ![license](https://img.shields.io/github/license/p-ranav/argparse?style=flat-square)

## Debugging

- [sharkdp/dbg-macro](https://github.com/sharkdp/dbg-macro):  A single-header dbg(…) macro for C++ ![stars](https://img.shields.io/github/stars/sharkdp/dbg-macro?style=flat-square) ![license](https://img.shields.io/github/license/sharkdp/dbg-macro?style=flat-square)

## Formatting

- [fmtlib/fmt](https://github.com/fmtlib/fmt): :zap: A modern formatting library ![stars](https://img.shields.io/github/stars/fmtlib/fmt?style=flat-square) ![license](https://img.shields.io/github/license/fmtlib/fmt?style=flat-square)

## Game Utility

- [skypjack/entt](https://github.com/skypjack/entt): :zap: Gaming meets modern C++ - a fast and reliable entity component system (ECS) and much more ![stars](https://img.shields.io/github/stars/skypjack/entt?style=flat-square) ![license](https://img.shields.io/github/license/skypjack/entt?style=flat-square)
- [ThePhD/sol2](https://github.com/ThePhD/sol2): a C++ <-> Lua API wrapper with advanced features and top notch performance ![stars](https://img.shields.io/github/stars/ThePhD/sol2?style=flat-square) ![license](https://img.shields.io/github/license/ThePhD/sol2?style=flat-square)

## Image Processing

- [opencv/opencv](https://github.com/opencv/opencv): :zap: Open Source Computer Vision Library ![stars](https://img.shields.io/github/stars/opencv/opencv?style=flat-square) ![license](https://img.shields.io/github/license/opencv/opencv?style=flat-square)

## JSON

- [nlohmann/json](https://github.com/nlohmann/json): :zap: JSON for Modern C++ ![stars](https://img.shields.io/github/stars/nlohmann/json?style=flat-square) ![license](https://img.shields.io/github/license/nlohmann/json?style=flat-square)

## Networking

- [boostorg/beast](https://github.com/boostorg/beast): HTTP and WebSocket built on Boost.Asio in C++11 ![stars](https://img.shields.io/github/stars/boostorg/beast?style=flat-square) ![license](https://img.shields.io/github/license/boostorg/beast?style=flat-square)
- [sogou/workflow](https://github.com/sogou/workflow): :zap: C++ Parallel Computing and Asynchronous Networking Framework ![stars](https://img.shields.io/github/stars/sogou/workflow?style=flat-square) ![license](https://img.shields.io/github/license/sogou/workflow?style=flat-square)
- [boostorg/asio](https://github.com/boostorg/asio): A cross-platform C++ library for network and low-level I/O programming ![stars](https://img.shields.io/github/stars/boostorg/asio?style=flat-square) ![license](https://img.shields.io/github/license/boostorg/asio?style=flat-square)

## Scripting

- [ThePhD/sol2](https://github.com/ThePhD/sol2): a C++ <-> Lua API wrapper with advanced features and top notch performance ![stars](https://img.shields.io/github/stars/ThePhD/sol2?style=flat-square) ![license](https://img.shields.io/github/license/ThePhD/sol2?style=flat-square)

## TUI

- [ArthurSonzogni/FTXUI](https://github.com/ArthurSonzogni/FTXUI): A simple cross-platform C++ library for terminal based user interfaces ![stars](https://img.shields.io/github/stars/ArthurSonzogni/FTXUI?style=flat-square) ![license](https://img.shields.io/github/license/ArthurSonzogni/FTXUI?style=flat-square)

## XML

- [leethomason/tinyxml2](https://github.com/leethomason/tinyxml2): A simple, small, efficient, C++ XML parser that can be easily integrated ![stars](https://img.shields.io/github/stars/leethomason/tinyxml2?style=flat-square) ![license](https://img.shields.io/github/license/leethomason/tinyxml2?style=flat-square)

## Contributing

Please feel free to submit issues and pull requests. You should add/update repositories under the `data/` folder, this README file is automaticly generated and should not be edited.

### Data Format

For repository `owner/name`, create a file named `owner.name.json` with the following format:

```js
{
	"path": "owner/name",
	"description: "",
	"zap": true,
	"topics": ["Topic Name"]
}
```

- `path` is a string that represents the path of the repository.
- `description` is a string that represents the description of the repository, it should not end with a period.
- `zap` is a boolean value that indicates if the repository should have a `:zap:` mark, which is usually given to 10K+ starred repositories and recognized repositories in its field.
- `topics` is an array of strings that represent the topics of the repository.

### Generating README

We use `src/main.cpp` to generate the README file, you can compile it with

```bash
g++ -std=c++17 -Wall -Wextra -o main.out src/main.cpp -lfmt
```

And then run it with

```bash
./main.out > README.md
```

This will generate the README file with the correct format. If you can't compile/run it locally, you can submit it to Github and wait for me to generate it.

## License

This project is licensed under the CC0 License - see the [LICENSE](LICENSE) file for details.
