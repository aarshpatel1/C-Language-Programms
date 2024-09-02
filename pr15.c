#include <stdio.h>

int main(void) {

  float base_salary, hra, da, ta, gross_salary;

  printf("Enter Base Salary: ");
  scanf("%f", &base_salary);

  // base_salary = 100;
  hra = base_salary * 10 / 100;
  da = base_salary * 5 / 100;
  ta = base_salary * 8 / 100;

  gross_salary = base_salary + hra + da + ta;

  // printf("%f   %f   %f   %f", base_salary, hra, da, ta);
  
  printf("\nThe Gross Salary is: %f", gross_salary);

  return 0;
}