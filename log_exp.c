#include "log_exp.h"
#include <math.h>
#include <stdio.h>

// base-10 logarithm (log)
double calc_log10(double value) {
  if (value <= 0.0) {
    printf(
        "Math Error: Logarithm is undefined for zero or negative numbers.\n");
    return 0.0;
  }
  return log10(value);
}

// natural logarithm (ln)
double calc_ln(double value) {
  if (value <= 0.0) {
    printf("Math Error: Natural logarithm is undefined for zero or negative "
           "numbers.\n");
    return 0.0;
  }
  return log(value);
}

// exponential function (e^x)
double calc_exp(double exponent) { return exp(exponent); }

// power function (x^y)
double calc_power(double base, double exponent) { return pow(base, exponent); }