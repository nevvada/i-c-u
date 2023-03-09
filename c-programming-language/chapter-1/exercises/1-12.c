#include <stdio.h>

#define OUT 0
#define IN 1

int main(void) {
  char character;
  int state;

  while ((character = getchar()) != EOF) {
    if (character != ' ' || character != '\n' || character != '\t') {
      putchar(character);
      state = OUT;
    }

    else if (state) {
      putchar('\n');
      state = IN;
    }
  }

  return 0;
}