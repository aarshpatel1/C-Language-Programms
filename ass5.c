#include <stdio.h>

int main(void) {
  
  float km, m, cm, mm;

  printf("Enter distance in kilometers: ");
  scanf("%f", &km);

  m = km * 1000;
  cm = km * 100000;
  mm = km * 1000000;

  printf("Distance in meters: %f\n", m);
  printf("Distance in centimeters: %f\n", cm);
  printf("Distance in millimeters: %f\n", mm);

  return 0;
}
