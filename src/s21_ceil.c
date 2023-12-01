#include "s21_math.h"

long double s21_ceil(double x) {
  long double res = 0;
  if (x == (long long int)x) {
    res = x;
  } else {
    if (x > 0)
      res = ((long long int)x) + 1;
    else if (x < 0)
      res = ((long long int)x);
  }
  return res;
}