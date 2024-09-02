#include <stdio.h>

int main(void) {

  const float pi = 3.1415;
  float radius;
  printf("Enter the radius: ");
  scanf("%f", &radius);
  printf("Parameter of the circle = %f", pi * radius * 2);

  return 0;
}