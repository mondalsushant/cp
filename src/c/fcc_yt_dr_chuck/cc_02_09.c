/**
 * SPDX-FileCopyrightText: © 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 *
 * Dr. Chuck @ freeCodeCamp.org YouTube: Line Input (safe) (cc_02_09.c)
 */

#include <stdio.h>
int main(void)
{
        char line[1024];
        printf("Enter a line for testing `stdout`: ");

        /**
         * No match pattern, unlike `scanf()` means that handling of overflows is purely done by
         * the `count` parameter of `fgets()`. In both of the cases, though, you still have to
         * handle the extra chars supplied @ `stdin` (for example, flush it), otherwise the next
         * part of the program that expects an input from `stdin` will get stale data from here.
         * Also, the `\n` supplied @ `stdin` is included by `fgets()`, so do not use another `\n`
         * when printing the line.
         */
        fgets(line, sizeof line, stdin);

        /* Use `%s` and not `%s\n` because of the above instruction. */
        printf("Line: %s", line);

        return 0;
}
