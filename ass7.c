#include <stdio.h>

int main(void) {
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);

  switch (c) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    printf("%c is a vowel.\n", c);
    break;
  default:
    printf("%c is not a vowel.\n", c);
  }

  return 0;
}