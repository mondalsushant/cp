/**
 * SPDX-FileCopyrightText: (C) 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 *
 * Dr. Chuck @ freeCodeCamp.org YouTube: Read A File (cc_02_06.c)
 */

#include <stdio.h>
int main(void)
{
        char line[1024];

        /* A `FILE` object is created by `fopen()` somewhere in the C runtime. */
        FILE *hand;
        hand = fopen("test.txt", "r");

        /* `fgets()` gets trashed after every run. File pointer is stored in the `FILE` object. */
        while (fgets(line, sizeof line, hand) != NULL) {
                printf("%s", line);
        }
}
