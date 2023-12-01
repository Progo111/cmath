#include "s21_math.h"

long double s21_log(double x) {
  double result = 0;
  if (x < 0.0)
    result = S21_NAN;
  else if (x == 0.0)
    result = (-1) * S21_INF;
  else if (x == 1.0)
    result = 0.0;
  else if (x == S21_INF)
    result = S21_INF;
  else {
    int ex_pow = 0;
    double compare = 0;
    while (x >= S21_E) {
      x /= S21_E;
      ++ex_pow;
    }
    for (int i = 0; i < 100; ++i) {
      compare = result;
      result = compare + 2 * (x - s21_exp(compare)) / (x + s21_exp(compare));
    }
    result += ex_pow;
  }
  return result;
}