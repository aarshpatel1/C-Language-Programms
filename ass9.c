#include <stdio.h>

int main(void) {

  int num1, num2;
  char op;

  printf("Enter the number 1: ");
  scanf("%d", &num1);

  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &op);

  printf("Enter the number 2: ");
  scanf("%d", &num2);

  if (op == '+') {
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
  } else if (op == '-') {
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
  } else if (op == '*') {
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
  } else if (op == '/') {
    if (num2 != 0) {
      printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
      printf("Error! Division by zero.\n");
    }
  } else {
    printf("Invalid operator.\n");
  }

  return 0;
}