#include <stdio.h>

int main(void) {

  int num1, num2, num3;

  printf("Enter the number 1: ");
  scanf("%d", &num1);
  printf("Enter the number 2: ");
  scanf("%d", &num2);
  printf("Enter the number 3: ");
  scanf("%d", &num3);

  if (num1 >= num2) {
    if (num1 >= num3) {
      printf("%d is the largest number", num1);
    } else {
      printf("%d is the largest number", num3);
    }
  } else {
    if (num2 >= num3) {
      printf("%d is the largest number", num2);
    } else {
      printf("%d is the largest number", num3);
    }
  }

  return 0;
}