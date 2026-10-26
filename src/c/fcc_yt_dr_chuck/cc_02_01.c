/**
 * SPDX-FileCopyrightText: (C) 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 *
 * Dr. Chuck @ freeCodeCamp.org YouTube: Output (cc_02_01.c)
 */

#include <stdio.h>
int main(void)
{
        printf("Hello, world!\n");

        /* Use `%` to embed stuff. */
        printf("This is an embedded decimal number (int): %d\n", 89);
        printf("This is an embedded floating-point number: %.1f\n", 2.3);
        printf("This is an embedded string: %s\n", "Peekaboo!");

        return 0;
}
