#ifndef ARITHMETIC_H
#define ARITHMETIC_H

// basic arithmetic operations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

// input handling functions
double get_number_input(const char *prompt);
char get_operator_input(const char *prompt);

#endif