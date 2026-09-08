/**
 * SPDX-FileCopyrightText: © 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 */

#include <stdio.h>

/* Number Input */

int main() {
        int num, sq;
        printf("Enter the integer to be squared: ");

        /* `&` is used for specifying the var's addr, not the var's val itself.*/
        scanf("%d", &num);

        sq = num * num;
        printf("The square of the given integer is '%d'.\n", sq);
}
