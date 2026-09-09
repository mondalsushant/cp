/**
 * SPDX-FileCopyrightText: © 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 *
 * Dr. Chuck @ freeCodeCamp.org YouTube: Line Input (cc_02_04.c)
 */

#include <stdio.h>
int main(void)
{
        char line[1024];
        printf("Enter a line for testing `stdout`: ");

        /**
         * `[^\n]` @ ` %1023[^\n]`: Detect an `\n` and stop the char-by-char dump to `line` char
         * array. `1023` is the buffer width limit. Without it, a buffer-overflow risk is always
         * there. Recommended width is (arr_len - 1). For a human, a "line" ends @ the first
         * newline. A leading space is used to skip all the leading whitespaces and newlines first
         * before `scanf` starts matching the STOP condition. I think that Dr. Chuck's match
         * pattern was a bit dubious.
         */
        scanf(" %1023[^\n]", line);

        printf("Line: %s\n", line);
        return 0;
}
