#include <stdio.h>

int main(void) {
  
  int i = 1, number;
 
  printf("Enter the limit: ");
  scanf("%d", &number);
  
  do {
      if (i % 2 == 0) {
          printf("%d\n", i);
      }
      i++;
  } while (i <= number);
  
  return 0;
}