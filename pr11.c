#include <stdio.h>

int main(void) {

  int x, y, z;
  printf("Enter the value of x: ");
  scanf("%d", &x);
  printf("Enter the value of y: ");
  scanf("%d", &y);

  z = ((x + y) * (x + y)) * ((x - y) * (x - y));

  printf("The value of z is: %d", z);
  return 0;
}