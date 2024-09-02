#include <stdio.h>

int main(void) {

  float bill, units, total_bill, surcharge;

  printf("Enter the units: ");
  scanf("%f", &units);

  bill = 0;

  if (units <= 50) {
    bill = units * 0.50;

  } else if (units <= 150) {
    bill = 50 * 0.50;
    units -= 50;
    bill += units * 0.75;

  } else if (units <= 250) {
    bill = 50 * 0.50;
    units -= 50;
    bill += 100 * 0.75;
    units -= 100;
    bill += units * 1.20;

  } else if (units > 250) {
    bill = 50 * 0.50;
    units -= 50;
    bill += 100 * 0.75;
    units -= 100;
    bill += 100 * 1.20;
    units -= 100;
    bill += units * 1.50;
  }

  surcharge = bill * 0.20;

  total_bill = bill + surcharge;

  printf("Consumer has to pay RS. %f", total_bill);

  return 0;
}