/**
 * SPDX-FileCopyrightText: (C) 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 *
 * Reverse Digits Variants
 * =======================
 * Write a C program to reverse the digits of a given integer.
 *
 * Refs: https://www.w3resource.com/c-programming-exercises/math/c-math-exercise-1.php
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <limits.h>

int ReverseNum(void)
{
        int num, reversed_num = 0, digit;
        long long working_num;
        bool is_neg = false;
        printf("Enter the integer to be reversed: ");
        if (scanf("%d", &num) != 1) {
                fprintf(stderr, "You must enter a single integer.\n");
                exit(EXIT_FAILURE);
        }
        working_num = (long long)num;
        if (working_num < 0) {
                is_neg = true;

                /* Use `working_num` to handle negatations in edge cases like `num = INT_MIN`. */
                working_num = -working_num;
        }
        if (working_num == 0) {
                reversed_num = 0;
                printf("%d\n", reversed_num);
                exit(EXIT_SUCCESS);
        }
        while (working_num > 0) {

                /* Extract the last digit of the integer. */
                digit = working_num % 10;

                /**
                 * Check for integer overflow before multiplication.
                 * => (reversed_num * 10) + digit <= INT_MAX
                 * => reversed_num                <= (INT_MAX - digit) / 10 <- error free
                 * Therefore, `reversed_num > (INT_MAX - digit) / 10` must raise the error.
                 */
                if (reversed_num > (INT_MAX - digit) / 10) {
                        fprintf(stderr, "Reversed number exceeds the integer range.\n");
                        exit(EXIT_FAILURE);
                }

                /* Shift the digits to the left and add the last digit. */
                reversed_num = (reversed_num * 10) + digit;

                /* Remove the last digit from the original integer. */
                working_num = working_num / 10;
        }

        /* Preserve the -ve sign for -ve integers. */
        if (is_neg) {
                reversed_num = -reversed_num;
        }

        printf("%d\n", reversed_num);
        exit(EXIT_SUCCESS);
}

int main(void)
{
        ReverseNum();
        return EXIT_SUCCESS;
}
