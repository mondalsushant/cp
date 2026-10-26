/**
 * SPDX-FileCopyrightText: (C) 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 *
 * Dr. Chuck @ freeCodeCamp.org YouTube: Max / Min v2 (cc_02_08.c)
 */

#include <stdio.h>
int main(void)
{
        int val, minval, maxval;
        printf("Enter the numbers to be compared (stop @ EOF): ");

        /* `scanf()` returns the number of items successfully read. */
        if (scanf("%d", &val) != 1) {

                fprintf(stderr, "No input was received.\n");
                return 1;
        }
        minval = maxval = val;
        while (scanf("%d", &val) == 1) {
                if (val < minval) {
                        minval = val;
                } else if (val > maxval) {
                        maxval = val;
                }
        }
        printf("Minimum value: %d\n", minval);
        printf("Maximum value: %d\n", maxval);
        return 0;
}
