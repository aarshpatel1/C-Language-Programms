#include <stdio.h>

int main(void) {

  char ch = 'a';
  do {
    printf("%c ", ch);
    ch = ch + 4;
  } while (ch <= 'z');

  return 0;
}