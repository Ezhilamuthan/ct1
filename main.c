#include <stdio.h>

int main() {

  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two numbers: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%lf + %lf = %lf", first, second, first + second);
      break;
    case '-':
      printf("%lf - %lf = %lf", first, second, first - second);
      break;
    case '*':
      printf("%lf * %lf = %lf", first, second, first * second);
      break;
    case '/':
      printf("%lf / %lf = %lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Incorrect input!");
  }

  return 0;
}
