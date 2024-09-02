#include <stdio.h>

int main(void) {

  int factorial = 1, limit;

  printf("Enter the limit: ");
  scanf("%d", &limit);

  for (int i = 1; i <= limit; i++) {
    factorial *= i;
  }

  printf("Sum of numbers: %d\n", factorial);

  return 0;
}
