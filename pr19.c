#include <stdio.h>

int main(void) {

  int number1, number2, number3;

  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &number1, &number2, &number3);

  if (number1 < number3) {
    if (number1 < number2) {
      printf("The minimum number is: %d", number1);
    } else {
      printf("The minimum number is: %d", number2);
    }
  } else {
    if (number3 < number2) {
      printf("The minimum number is: %d", number3);
    } else {
      printf("The minimum number is: %d", number2);
    }
  }

  return 0;
}