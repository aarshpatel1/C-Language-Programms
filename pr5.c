#include <stdio.h>

int main(void) {

  float length, breadth;
  printf("Enter the length: ");
  scanf("%f", &length);
  printf("Enter the breadth: ");
  scanf("%f", &breadth);
  printf("Area of Rectangle = %f", length * breadth);

  return 0;
}