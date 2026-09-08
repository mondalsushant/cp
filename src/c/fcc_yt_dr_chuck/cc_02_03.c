/**
 * SPDX-FileCopyrightText: © 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 *
 * Dr. Chuck @ freeCodeCamp.org YouTube: String Input (cc_02_03.c)
 */

#include <stdio.h>
int main(void)
{
        /* Define a char array to store a 256-character string. */
        char name[256];

        printf("Enter your name: ");

        /**
         * `100` @ `%100s`: Allow 100 chars of input at max. `name` and not `&name`: When you do
	 * not pass the exact index of the array, you are passing the address of the beginning of
	 * the array. That is why you don't require `&`.
         */
        scanf("%100s", name);

        printf("Hello, %s!\n", name);
        return 0;
}
