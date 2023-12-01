#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <float.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S21_PI 3.141592653589793238462643
#define S21_E 2.71828182845904523536
#define S21_EPS 1e-12
#define S21_INF __builtin_inf()
#define S21_NAN __builtin_nan("")
#define s21_is_inf __builtin_isinf
#define s21_is_nan __builtin_isnan
#define MAX_LONG_DOUBLE 1.79769313486231571e+308
#define MAX_DOUBLE 1.79769313486231571e+308
#define S21_ASIN_EPS 1e-16l;
#define S21_NEGZERO -0.0
#define TEST_EPS 1e-6l

#define S21_PI_12 (S21_PI / 12.F)
#define S21_PI_6 (S21_PI / 6.F)
#define S21_PI_2 (S21_PI / 2.F)
#define S21_SQRT_3 ((float)1.732050807569)

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);
long double s21_log(double x);
long double s21_fact(double x);

#endif  // SRC_S21_MATH_H_