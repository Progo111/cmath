#include "s21_math.h"

long double s21_acos(double x) {
  long double result = S21_NAN;
  if (s21_fabs(x) <= 1) {
    result = S21_PI / 2 - s21_asin(x);
  }
  return result;
}
