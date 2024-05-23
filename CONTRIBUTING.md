# Contributing

Please feel free to submit issues and pull requests. You should add/update repositories under the `data/` folder, this README file is automaticly generated and should not be edited.

## Data Format

For repository `owner/name`, create a file named `owner.name.json` with the following format:

```js
{
	"path": "owner/name",
	"description": "",
	"zap": true,
	"topics": ["Topic Name"]
}
```

- `path` is a string that represents the path of the repository.
- `description` is a string that represents the description of the repository, it should not end with a period (the period will be added by the script).
- `zap` is a boolean value that indicates if the repository should have a `:zap:` mark, which is usually given to 10K+ starred repositories and recognized repositories in its field.
- `topics` is an array of strings that represent the topics of the repository.

## Generating README

We use `src/main.cpp` to generate the README file, you can compile it with

```bash
g++ -std=c++17 -Wall -Wextra -o main.out src/main.cpp -lfmt
```

And then run it with

```bash
./main.out > README.md
```

This will generate the README file with the correct format. If you can't compile/run it locally, you can submit it to GitHub and wait for me to generate it.
