/**
 * SPDX-FileCopyrightText: © 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 */

#include <stdio.h>

/* String Input */

int main() {

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
}
