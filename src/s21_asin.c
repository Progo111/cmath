#include "s21_math.h"

long double s21_asin(double x) {
  long double result = S21_NAN;
  if (s21_fabs(x) < 1) {
    result = s21_atan(x / s21_sqrt(1 - x * x));
  } else if (x == 1) {
    result = S21_PI / 2;
  } else if (x == -1) {
    result = -S21_PI / 2;
  }
  return result;
}
