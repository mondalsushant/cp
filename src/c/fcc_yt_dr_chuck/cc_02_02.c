/**
 * SPDX-FileCopyrightText: (C) 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 *
 * Dr. Chuck @ freeCodeCamp.org YouTube: Number Input (cc_02_02.c)
 */

#include <stdio.h>
int main(void)
{
        int num, sq;
        printf("Enter the integer to be squared: ");

        /* `&` is used for specifying the variable's address, not the variable's value itself. */
        scanf("%d", &num);

        sq = num * num;
        printf("The square of the given integer is '%d'.\n", sq);

        return 0;
}
