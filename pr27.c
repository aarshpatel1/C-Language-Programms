#include <stdio.h>

int main(void) {

  int start_year, end_year;

  printf("Enter the starting year: ");
  scanf("%d", &start_year);

  printf("Enter the ending year: ");
  scanf("%d", &end_year);

  while (start_year <= end_year) {
    if (start_year % 4 == 0) {
      if (start_year % 100 == 0) {
        if (start_year % 400 == 0) {
          printf("%d, ", start_year);
        }
      } else {
        printf("%d\n", start_year);
      }
    }
    start_year += 4;
  }

  return 0;
}