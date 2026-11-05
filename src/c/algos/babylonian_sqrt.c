/*
 * SPDX-FileCopyrightText: (C) 2026 Sushant Mondal <contact@sushantmondal.com>
 *
 * SPDX-License-Identifier: MIT
 *
 * Square root approximation using the Babylonian method.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ITERATIONS 100
#define ABSOLUTE_TOLERANCE 1e-12L
#define OUTPUT_PRECISION 18

/*
 * To-do:
 * * Check convergence before returning the result.
 * * Optimize the first guess using the neighbouring perfect squares.
enum SqrtStatus {
        SQRT_CONVERGED,
        SQRT_MAX_ITERATIONS_REACHED
};
*/

long double BabylonianSqrt(long double x)
{
        long double x_cur, x_next, diff, residual;

        /**
         * The first assumption must be a non-zero number because of it being in the denominator.
         */
        x_cur = 1L;

        for (int i = 0; i < MAX_ITERATIONS; i++) {

                /* The Babylonian method */
                x_next = 0.5L * (x_cur + (x/x_cur));

                diff = fabsl(x_next - x_cur);
                residual = fabsl((x_next * x_next) - x);
                printf(
                        "%d: approximation = %.*Lf, error = %.*Lf, residual = %.*Lf\n",
                        i,
                        OUTPUT_PRECISION,
                        x_next,
                        OUTPUT_PRECISION,
                        diff,
                        OUTPUT_PRECISION,
                        residual
                );
                if ((diff) <= ABSOLUTE_TOLERANCE) {
                        printf("The absolute tolerance has been reached! Exiting...\n");
                        break;
                }
                x_cur = x_next;
        }
        return x_next;
}

int main(void)
{
        long double n, approx;
        printf("Enter the number whose square root you want to find: ");
        if (scanf("%Lf", &n) != 1) {
                printf("No finite number was provided. Exiting...\n");
                return EXIT_FAILURE;
        }
        if (isfinite(n) == 0) {
                printf("The given number is not finite. Exiting...\n");
                return EXIT_FAILURE;
        }
        if (n < 0L) {
                printf("The given number cannot be negative. Exiting...\n");
                return EXIT_FAILURE;
        }
        else if (n == 0) {
                approx = 0;
        }
        else {
                approx = BabylonianSqrt(n);
        }
        printf(
                "The square root approximation of the given number '%Lf' is '%.*Lf'.\n",
                n,
                OUTPUT_PRECISION,
                approx
        );
        return EXIT_SUCCESS;
}
