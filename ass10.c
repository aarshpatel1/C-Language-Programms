#include <stdio.h>

int main(void) {

  int marks;

  printf("Enter your marks: ");
  scanf("%d", &marks);

  if (marks >= 90) {
    printf("Grade A\n");
  } else if (marks >= 80) {
    printf("Grade B\n");
  } else if (marks >= 70) {
    printf("Grade C\n");
  } else if (marks >= 60) {
    printf("Grade D\n");
  } else if (marks >= 50) {
    printf("Grade E\n");
  } else {
    printf("Fail\n");
  }

  return 0;
}