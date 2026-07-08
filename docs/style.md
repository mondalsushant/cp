<!-- SPDX-FileCopyrightText: © 2026 Sushant Mondal <contact@sushantmondal.com> -->
<!-- -->
<!-- SPDX-License-Identifier: MIT -->

# Coding guidelines

## General

### Column count

The maximum allowed column count or character width is 100. For developers using VS Code as their
primary code editor, <a href="/.vscode/settings.json">settings.json</a> is configured to display a
vertical line at 100 character width. Try not to cross the vertical line when making source files.

### Commit messages

Use <a href="https://www.conventionalcommits.org/en/v1.0.0/">Conventional Commits 1.0.0</a>.

Conventional Commits' example:

```
<type>[optional scope]: <description>

[optional body]

[optional footer(s)]
```

Check the valid `<type>`s from Conventional Commits' documentation.

### Copyright and license header

Use the <a href="https://www.spdx.org/licenses/MIT.html">SPDX identifier `MIT`</a> (see
<a href="/LICENSE">LICENSE</a>) to mention the license used by this project, i.e., the MIT license.
Use <a href="https://reuse.software/faq/#step-2">REUSE's header convention</a> to construct the file
header related to the licensing and copyright of this project. A slightly modified version of this
convention is given below for this project's use.

REUSE's example:

```
# SPDX-FileCopyrightText: [year] [copyright holder] <[email address]>
#
# SPDX-License-Identifier: [identifier]
```

Example:

```
# SPDX-FileCopyrightText: 20[XX] Sushant Mondal <contact@sushantmondal.com>
#
# SPDX-License-Identifier: MIT
#
# [File description]
```

## C++

Use <a href="https://google.github.io/styleguide/cppguide.html">Google C++ Style Guide</a>.
