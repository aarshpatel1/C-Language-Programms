#include <stdio.h>

int main(void) {

  int number;

  printf("Enter the number: ");
  scanf("%d", &number);

  (number % 2 == 0 ? printf("%d is an Even number.", number)
                   : printf("%d is an Odd number.", number));

  return 0;
}