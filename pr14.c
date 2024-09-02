#include <stdio.h>

int main(void) {
  
  float f, c;

  printf("Enter temperature in Celsius: ");
  scanf("%f", &c);

  f = c * (9.0 / 5) + 32.0;

  printf("Temperature in Fahrenheit is: %f F", f);
  
  return 0;
}