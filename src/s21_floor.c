#include "s21_math.h"

long double s21_floor(double x) {
  double res;
  if (x != x) {
    res = x;
  } else {
    int ceil_digit = (int)x;
    if (x < 0 && (x - ceil_digit) != 0) {
      res = (double)ceil_digit - 1;
    } else if (x == S21_INF) {
      res = S21_INF;
    } else {
      res = (double)ceil_digit;
    }
  }
  return res;
}