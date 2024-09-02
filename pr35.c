#include <stdio.h>

int main(void) {

  int num1, num2, num3, minimum;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  
  minimum = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
  
  printf("The minimum number is %d\n", minimum);
  
  return 0;
}