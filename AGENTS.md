# AGENTS.md

## Project Overview

[awesome-practical-cpp](https://github.com/szdytom/awesome-practical-cpp) is a curated list of production-ready C++ libraries. Each entry is a JSON file under `data/`. The `README.md` is auto-generated from these JSON files by `src/main.cpp`.

### Inclusion Criteria

- Library/framework (not docs, blogs, apps, or demo code)
- At least 2K GitHub stars
- Actively maintained (recent commits)
- Production-ready (not WIP)
- Written in C++ or has a friendly C++ API
- Open-source on GitHub

Repos below 2K stars or still WIP may be included with a `:construction:` mark.

## Adding a New Project

### Step 1: Fetch repo info

Use `webfetch` or `gh` to get the official description and star count from GitHub.

### Step 2: Create JSON file

File: `data/{owner}.{name}.json`

```json
{
  "path": "owner/name",
  "description": "Official GitHub description (no trailing period)",
  "icon": "",
  "topics": ["Topic Name"]
}
```

### Step 3: Icon rules

| Icon | Condition |
|---|---|
| `"zap"` (:zap:) | >= 10K stars OR recognized in its field |
| `"construction"` (:construction:) | < 2K stars OR not production-ready |
| `""` (empty) | Default for everything else |

### Step 4: Topic assignment

Use existing topic names from `data/*.json`. Common ones: Basic Utility, CLI, Concurrency, Cryptography, Data Visualization, Database, Debugging, Diagnostics, Embedded, Formatting, GPU, GUI, Game Utility, Image Processing, Internationalization, JIT, JSON, Logging, Machine Learning, Math, Multimedia, Networking, Parsing, Physics, Reflection, Rendering, Scripting, Serialization, TUI, Testing, XML, YAML.

### Step 5: Regenerate README

```bash
./main.out > README.md
```

The binary `main.out` is pre-built. If recompilation is needed:

```bash
g++ -std=c++17 -Wall -Wextra -o main.out src/main.cpp -lfmt
```

### Step 6: Commit

- Stage the new JSON file and `README.md`
- Use a concise commit message
- Do NOT commit unless explicitly asked

## Removing a Project

- Delete the JSON file from `data/`
- Regenerate `README.md`
- Commit both changes

## Updating Icons

- Check current star counts against icon rules
- Update the `icon` field in JSON
- Regenerate `README.md`
- Batch icon updates in a single commit when possible
