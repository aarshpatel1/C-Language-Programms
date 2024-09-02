#include <stdio.h>

int main(void) {

  int i, limit;

  printf("Enter the limit: ");
  scanf("%d", &limit);

  for (int i = 1; i <= 10; i++) {
    printf("%d x %2d = %d\n", limit, i, i * limit);
  }

  return 0;
}
