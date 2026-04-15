#define _USE_MATH_DEFINES
#include "trig_functions.h"
#include <math.h>

// helper functions
double to_radians(double degrees) { return degrees * (M_PI / 180.0); }

double to_degrees(double radians) { return radians * (180.0 / M_PI); }

// standard trigo functions
double calc_sin(double angle, int is_degrees) {
  if (is_degrees)
    angle = to_radians(angle);
  return sin(angle);
}

double calc_cos(double angle, int is_degrees) {
  if (is_degrees)
    angle = to_radians(angle);
  return cos(angle);
}

double calc_tan(double angle, int is_degrees) {
  if (is_degrees)
    angle = to_radians(angle);
  return tan(angle);
}

// reciprocal trig functions
double calc_csc(double angle, int is_degrees) {
  if (is_degrees)
    angle = to_radians(angle);
  // Cosec is 1 / sin
  return 1.0 / sin(angle);
}

double calc_sec(double angle, int is_degrees) {
  if (is_degrees)
    angle = to_radians(angle);
  // Sec is 1 / cos
  return 1.0 / cos(angle);
}

double calc_cot(double angle, int is_degrees) {
  if (is_degrees)
    angle = to_radians(angle);
  // Cot is 1 / tan
  return 1.0 / tan(angle);
}

// inverse trigo functions

double calc_asin(double value, int want_degrees) {
  double result = asin(value);
  return want_degrees ? to_degrees(result) : result;
}

double calc_acos(double value, int want_degrees) {
  double result = acos(value);
  return want_degrees ? to_degrees(result) : result;
}

double calc_atan(double value, int want_degrees) {
  double result = atan(value);
  return want_degrees ? to_degrees(result) : result;
}

// hyperbolic trigo functions

double calc_sinh(double angle, int is_degrees) {
  if (is_degrees)
    angle = to_radians(angle);
  return sinh(angle);
}

double calc_cosh(double angle, int is_degrees) {
  if (is_degrees)
    angle = to_radians(angle);
  return cosh(angle);
}

double calc_tanh(double angle, int is_degrees) {
  if (is_degrees)
    angle = to_radians(angle);
  return tanh(angle);
}
