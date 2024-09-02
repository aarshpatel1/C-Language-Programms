#include <stdio.h>

int main(void) {

  int angle1, angle2, angle3;

  printf("Enter the angle 1: ");
  scanf("%d", &angle1);
  printf("Enter the angle 2: ");
  scanf("%d", &angle2);

  angle3 = 180 - (angle1 + angle2);

  printf("The angle 3 is: %d", angle3);

  return 0;
}