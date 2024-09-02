#include <stdio.h>

int main(void) {

  int number1, number2, number3, number4;

  printf("Enter 4 numbers: ");
  scanf("%d %d %d %d", &number1, &number2, &number3, &number4);

  if (number1 > number4) {
    if (number1 > number3) {
      if (number1 > number2) {
        printf("The maximum number is: %d.", number1);
      } else {
        printf("The maximum number is: %d.", number2);
      }
    } else {
      if (number3 > number2) {
        printf("The maximum number is: %d.", number3);
      } else {
        printf("The maximum number is: %d.", number2);
      }
    }
  } else {
    if (number2 > number4) {
      if (number3 > number2) {
        printf("The maximum number is: %d.", number3);
      } else {
        printf("The maximum number is: %d.", number2);
      }
    } else {
      if (number4 > number3) {
        printf("The maximum number is: %d.", number4);
      } else {
        printf("The maximum number is: %d.", number3);
      }
    }
  }

  return 0;
}