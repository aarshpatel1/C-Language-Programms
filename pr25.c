#include <stdio.h>

int main(void) {

  int i=1,limit;
  printf("Enter the limit: ");
  scanf("%d", &limit);

  while (i <= limit) {
    printf("%d\n", i);
    i++;
  }

  return 0;
}