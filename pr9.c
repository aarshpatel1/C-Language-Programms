#include <stdio.h>

int main(void) {

  int x, y, z;
  printf("Enter the value of x: ");
  scanf("%d", &x);
  printf("Enter the value of y: ");
  scanf("%d", &y);

  z = x;
  x = y;
  y = z;

  printf("The new value of, x = %d\n", x);
  printf("The new value of, y = %d\n", y);

  return 0;
}