#include <stdio.h>

int main(void) {

  int sum = 0, limit;

  printf("Enter the limit: ");
  scanf("%d", &limit);

  for (int i = 1; i <= limit; i++) {
    sum += i;
  }

  printf("Sum of numbers: %d\n", sum);

  return 0;
}
