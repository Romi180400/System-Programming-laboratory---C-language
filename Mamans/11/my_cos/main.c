#include "my_cos.h"
#include <stdio.h>
#include <math.h>

/** 
 * @brief This program calculates the cosine of a user-provided value using two different methods:
 *        1. Using a custom cosine series function (my_cos_result)
 *        2. Using the standard library function (cos)
 * @return Returns 0 to indicate successful execution.
 */
int main(){
    double value;
    double my_cos_result; /* Declare my_cos_result here */
    double lib_cos;

    printf("Enter a value for x: ");
    scanf("%lf", &value);

    my_cos_result = my_cos(value); /* Assign value here */
    lib_cos = cos(value);

    printf("my_cos_result(%f) = %f\n", value, my_cos_result);
    printf("cos(%f) = %f\n", value, lib_cos);

    return 0;
}

