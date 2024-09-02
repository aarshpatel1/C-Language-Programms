#include <stdio.h>

int main(void) {

  int number1, number2;

  printf("Enter the number 1: ");
  scanf("%d", &number1);
  printf("Enter the number 2: ");
  scanf("%d", &number2);

  printf("\nAddition: %d + %d = %d", number1, number2, number1 + number2);
  printf("\nSubtraction: %d - %d = %d", number1, number2, number1 - number2);
  printf("\nMultiplication: %d * %d = %d", number1, number2, number1 * number2);
  printf("\nDivision: %d / %d = %d", number1, number2, number1 / number2);
  printf("\nModulo: %d %% %d = %d", number1, number2, number1 % number2);

  return 0;
}