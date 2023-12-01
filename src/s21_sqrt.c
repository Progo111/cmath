#include "s21_math.h"

long double s21_sqrt(double x) {
  long double res = 0;
  if (x < 0 || x == S21_NAN) {
    res = S21_NAN;
  } else if (x == S21_INF || x <= S21_EPS) {
    res = x;
  } else {
    res = s21_pow(x, 0.5);
  }
  return res;
}