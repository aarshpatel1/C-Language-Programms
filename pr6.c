#include <stdio.h>

int main(void) {

  float base, height;
  printf("Enter the base: ");
  scanf("%f", &base);
  printf("Enter the height: ");
  scanf("%f", &height);
  printf("Area of Triangle = %f", base * height * 0.5);

  return 0;
}