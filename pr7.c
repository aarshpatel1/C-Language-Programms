#include <stdio.h>

int main(void) {

  float p, r, n;
  printf("Enter the p: ");
  scanf("%f", &p);
  printf("Enter the r: ");
  scanf("%f", &r);
  printf("Enter the n: ");
  scanf("%f", &n);
  printf("Simple Interest = %f", p * r * n / 100);

  return 0;
}