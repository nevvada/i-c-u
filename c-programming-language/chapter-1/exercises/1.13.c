#include <stdio.h>

/* histogram horizontal */
int main(void) {
  char character;
  int number_of_characters = 0;

  while ((character = getchar()) != EOF) {
    // count how many words there are
    if (character == ' ' || character == '\n' || character == '\t') {
      printf("%d ", number_of_characters);

      number_of_characters = 0;
    } else {
      ++number_of_characters;
    }
  }

  printf("\n");

  return 0;
}