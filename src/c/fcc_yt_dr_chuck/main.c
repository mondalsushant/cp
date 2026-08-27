/**
 * SPDX-FileCopyrightText: © 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 */

#include <stdio.h>

/**
 * 2026-08-27: Yo, this is my first time writing C, and that too in GNU nano 9.1! Use
 * `nano --rcfile ../../../.nanorc main.c` to edit this file using the custom nano config ;). Set
 * your console's profile background color to something dark.
 */

int main() {

        /**
         * ==========
         * cc_02_01.c
         * ==========
         * Output
         */
        printf("Hello, world!\n");

        /* Use `%` to embed stuff. */
        printf("This is an embedded decimal number (int): %d\n", 89);
        printf("This is an embedded floating-point number: %.1f\n", 2.3);
        printf("This is an embedded string: %s\n", "Peekaboo!");

        /**
         * ==========
         * cc_02_02.c
         * ==========
         * Number Input
         */

        int num, sq;
        printf("Enter the integer to be squared: ");

        /* `&` is used for specifying the var's addr, not the var's val itself.*/
        scanf("%d", &num);

        sq = num * num;
        printf("The square of the given integer is '%d'.\n", sq);

        /**
         * ==========
         * cc_02_03.c
         * ==========
         * String Input
         */

        /* Define a char arr (type: `char`) to store a 256-char string. */
        char name[256];

        printf("Enter your name: ");

        /**
         * `100` @ `%100s`: Allow 100 chars of input at max.
         * `name` and not `&name`: When you don't pass the exact index of the arr, you are passing
         *                         the address of the beginning of the arr. That is why you don't
         *                         require `&`.
         */
        scanf("%100s", name);

        printf("Hello, %s!\n", name);

        /**
         * ==========
         * cc_02_04.c
         * ==========
         * Line Input
         */

         char line[1024];
         printf("Enter a line for testing `stdout`: ");

         /**
          * `[^\n]` @ ` %1023[^\n]`: Detect an `\n` and stop the char-by-char dump to `line` char
          * arr. `1023` is the buffer width limit. Without it, a buffer-overflow risk is always
          * there. Recommended width is (arr_len - 1). For a human, a "line" ends @ the first
          * newline. A leading space is used to skip all the leading whitespaces and newlines
          * first before `scanf` starts matching the STOP condition. I think that Dr. Chuck's match
          * pattern was a bit dubious.
          */
         scanf(" %1023[^\n]", line);

         printf("Line: %s\n", line);
}
