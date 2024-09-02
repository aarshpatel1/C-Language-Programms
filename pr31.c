#include <stdio.h>

int main(void) {

  int i, limit, temp = 0, total = 0;
  int old_answer = 1, new_answer = 0;

  printf("Enter the limit: ");
  scanf("%d", &limit);

  /*
  0 + 1 = 1
  1 + 1 = 2
  2 + 1 = 3
  3 + 2 = 5
  */

  for (i = 0; i <= limit; i++) {
    printf("%d ", total);
    total = old_answer + new_answer;
    old_answer = new_answer;
    new_answer = total;
  }

  return 0;
}