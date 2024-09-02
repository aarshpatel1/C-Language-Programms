#include <stdio.h>

int main(void) {

  int x, y;
  printf("Enter the value of x: ");
  scanf("%d", &x);
  printf("Enter the value of y: ");
  scanf("%d", &y);

  x = x + y;
  y = x - y;
  x = x - y;

  printf("The new value of, x = %d\n", x);
  printf("The new value of, y = %d\n", y);

  return 0;
}