#include <stdio.h>

int main(void) {

  int number1, number2;

  printf("Enter the number 1: ");
  scanf("%d", &number1);
  printf("Enter the number 2: ");
  scanf("%d", &number2);

  if (number1 == number2) {
    printf("The numbers are equal.");
  } else if (number1 > number2) {
    printf("The minimum number is: %d", number2);
  } else {
    printf("The minimum number is: %d", number1);
  }

  return 0;
}