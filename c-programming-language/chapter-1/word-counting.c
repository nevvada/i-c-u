#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and character in input */
int main(void) {
  int character, new_lines, new_words, new_characters, state;

  state = OUT;
  new_lines = new_words = new_characters = 0;

  while ((character = getchar()) != EOF) {
    ++new_characters;

    if (character == '\n') {
      ++new_lines;
    }

    if (character == ' ' || character == '\n' || character == '\t') {
      state = OUT;
    }

    else if (state == OUT) {
      state = IN;
      ++new_words;
    }
  }

  printf("%d %d %d\n", new_lines, new_words, new_characters);

  return 0;
}
