/**
 * @file my_cos.h
 * @brief Header file for a custom cosine calculation function using a Taylor series approximation.
 */
#ifndef MY_COS_H    
#define MY_COS_H
/**
 * @brief Calculate the cosine of an angle using a Taylor series approximation with up to 6 terms.
 *
 * This function calculates the cosine of an angle 'x' using a Taylor series expansion
 * up to 6 terms. It operates on angles within the range [0, 2π) by applying modulo 2π to the input.
 *
 * @param x The angle in radians for which to calculate the cosine.
 * @return The cosine of the given angle 'x'.
 */
double my_cos(double x);
#endif/* MY_COS_H_ */