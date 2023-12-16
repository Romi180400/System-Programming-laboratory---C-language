/**
 * @file my_cos.c
 * @brief Implementation of a custom cosine calculation function using a Taylor series approximation.
 */
#include "my_cos.h"
#include <stdio.h>
#include <math.h>

static const int fact_map[6] = {2, 24, 720, 40320, 3628800, 479001600};
/* Modulus function macro
   cos repeats every 2π ==> x = x % (2*2π) */
#define modd(x, y) ((x) - (int)((x) / (y)) * (y))

#define CONST_2PI (2.0 * M_PI) // Define 2π in terms of M_PI

/* Function to calculate cos using Taylor series up to 6 terms and 2π modules */
double my_cos(double x) {
    double result = 1.0;
    double term = 1.0;
    double x_squared = x * x;
    int sign = -1;
    int i = 2;

    x = modd(x, CONST_2PI); /* Reduce x within the range of 0 and 2π */

    while (fabs(term) >= 1.0e-6) {/* Increased terms and precision */
        term *= x_squared / (i * (i - 1));
        result += sign * term;
        sign *= -1;
        i += 2;
    }

    return result;
}

