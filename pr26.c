#include <stdio.h>

int main(void) {

  int i;
  printf("Enter the limit: ");
  scanf("%d", &i);

  while (i > 0) {
    
    printf("%d\n", i);
    i--;
  }

  return 0;
}