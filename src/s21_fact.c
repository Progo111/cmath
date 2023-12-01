#include "s21_math.h"

long double s21_fact(double x) {
  double i = 1;
  double res = 1;
  while (i < x) {
    res = res * (i + 1);
    i++;
  }
  return res;
}