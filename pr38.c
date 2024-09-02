#include <stdio.h>

int main(void) {

  int number, first_digit, last_digit, sum;

  printf("Enter a number: ");
  scanf("%d", &number);

  last_digit = number % 10;

  while (number >= 10) {
    number = number / 10;
  }

  first_digit = number;

  sum = first_digit + last_digit;

  printf("The sum of the first and the last digit: %d\n", sum);

  return 0;
}