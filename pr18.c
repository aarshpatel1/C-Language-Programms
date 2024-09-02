#include <stdio.h>

int main(void) {

  int number;

  printf("Enter the number: ");
  scanf("%d", &number);

  if (number == 0) {
    printf("This is Zero.");
  } else if (number > 0) {
    printf("%d is a poisitive number", number);
  } else {
    printf("%d is a negative number", number);
  }

  return 0;
}