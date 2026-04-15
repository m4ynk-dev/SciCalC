#include "arithmetic.h"
#include <stdio.h>

double add(double a, double b) { return a + b; }

double subtract(double a, double b) { return a - b; }

double multiply(double a, double b) { return a * b; }

double divide(double a, double b) {
  if (b == 0.0) {
    printf("Error: Division by zero is undefined.\n");
    return 0.0;
  }
  return a / b;
}
// gets a number from the user
double get_number_input(const char *prompt) {
  double value;
  printf("%s", prompt);

  // Loop until scanf successfully reads 1 valid double
  while (scanf("%lf", &value) != 1) {
    printf("Invalid input. Please enter a valid number: ");
    // Clear the input buffer to prevent an infinite loop
    while (getchar() != '\n')
      ;
  }
  return value;
}

// gets an operator character (+, -, *, /)
char get_operator_input(const char *prompt) {
  char op;
  printf("%s", prompt);

  scanf(" %c", &op);

  return op;
}