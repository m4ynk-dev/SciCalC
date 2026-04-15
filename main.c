#include "arithmetic.h"
#include "log_exp.h"
#include "trig_functions.h"
#include <stdio.h>

void print_main_menu() {
  printf("\n========================================\n");
  printf("        CLI SCIENTIFIC CALCULATOR       \n");
  printf("========================================\n");
  printf("1. Basic Arithmetic (+, -, *, /)\n");
  printf("2. Trigonometry (sin, cos, tan, etc.)\n");
  printf("3. Logarithmic & Exponential (log, ln, e^x)\n");
  printf("0. Exit\n");
  printf("========================================\n");
}

int main() {
  int main_choice;

  while (1) {
    print_main_menu();
    main_choice = (int)get_number_input("Select a category (0-3): ");

    if (main_choice == 0) {
      printf("Exiting calculator. Goodbye!\n");
      break;
    }

    switch (main_choice) {
    case 1: {
      printf("\n--- Basic Arithmetic ---\n");
      double a = get_number_input("Enter first number: ");
      char op = get_operator_input("Enter operator (+, -, *, /): ");
      double b = get_number_input("Enter second number: ");
      double result;

      switch (op) {
      case '+':
        result = add(a, b);
        break;
      case '-':
        result = subtract(a, b);
        break;
      case '*':
        result = multiply(a, b);
        break;
      case '/':
        result = divide(a, b);
        break;
      default:
        printf("Error: Invalid operator.\n");
        continue;
      }
      printf("\n>> Result: %lf\n", result);
      break;
    }

    case 2: {
      printf("\n--- Trigonometry ---\n");
      printf("1. sin  2. cos  3. tan\n");
      printf("4. asin 5. acos 6. atan\n");
      int trig_op = (int)get_number_input("Select function (1-6): ");

      double val = get_number_input("Enter value/angle: ");
      int is_deg = (int)get_number_input(
          "Is this in degrees? (1 for Yes, 0 for Radians): ");
      double result;

      switch (trig_op) {
      case 1:
        result = calc_sin(val, is_deg);
        break;
      case 2:
        result = calc_cos(val, is_deg);
        break;
      case 3:
        result = calc_tan(val, is_deg);
        break;
      case 4:
        if (val < -1.0 || val > 1.0) {
          printf("Error: Domain must be [-1, 1].\n");
          continue;
        }
        result = calc_asin(val, is_deg);
        break;
      case 5:
        if (val < -1.0 || val > 1.0) {
          printf("Error: Domain must be [-1, 1].\n");
          continue;
        }
        result = calc_acos(val, is_deg);
        break;
      case 6:
        result = calc_atan(val, is_deg);
        break;
      default:
        printf("Invalid selection.\n");
        continue;
      }
      printf("\n>> Result: %lf\n", result);
      break;
    }

    case 3: {
      printf("\n--- Logarithmic & Exponential ---\n");
      printf("1. log10(x)  2. ln(x)  3. e^x  4. x^y\n");
      int log_op = (int)get_number_input("Select function (1-4): ");
      double result;

      if (log_op == 1 || log_op == 2 || log_op == 3) {
        double val = get_number_input("Enter value (x): ");
        if (log_op == 1)
          result = calc_log10(val);
        else if (log_op == 2)
          result = calc_ln(val);
        else if (log_op == 3)
          result = calc_exp(val);
      } else if (log_op == 4) {
        double base = get_number_input("Enter base (x): ");
        double exp = get_number_input("Enter exponent (y): ");
        result = calc_power(base, exp);
      } else {
        printf("Invalid selection.\n");
        continue;
      }

      printf("\n>> Result: %lf\n", result);
      break;
    }

    default:
      printf("Invalid category. Please select a number between 0 and 3.\n");
    }
  }

  return 0;
}