#include <stdio.h>

#define BACKSPACE_ASCII_CODE 8

// int main() {
//   int c;

//   c = getchar();

//   while ((c = getchar()) != EOF) {
//     printf("output: %d\n", c);
//     putchar(c);
//   }

//   return 0;
// }

// int main() {
//   long nc;

//   nc = 0;

//   while (getchar() != EOF)
//     ++nc;

//   printf("%ld\n", nc);

//   return 0;
// }

// int main() {
//   double nc;

//   for (nc = 0; getchar() != EOF; ++nc);

//   printf("%.0f\n", nc);

//   return 0;
// }

// counting lines
// int main() {
//   int c = 0;
//   int nl = 0;
//   int blanks = 0;

//   while ((c = getchar()) != EOF) {
//     if (c == ' ') {
//       ++blanks;
//     }

//     if (c == '\n') {
//       ++nl;
//     }
//   }

//   printf("newlines: %d\n", nl);
//   printf("new spaces: %d\n", blanks);

//   return 0;
// }

// int main(void) {
//   char c;
//   char prev_c = '\0';

//   while ((c = getchar()) != EOF) {
//     if (c != ' ' || prev_c != ' ') {
//       putchar(c);
//     }

//     prev_c = c;
//   }

//   return 0;
// }

int main(void) {
  char c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      // replace each tab by literal \t
      putchar('\\');
      putchar('t');
    }
    else if (c == BACKSPACE_ASCII_CODE) // this wont work because backspace is a control character, not part of sequence
    {
      putchar('\\');
      putchar('b');
    }
    else if (c == '\\') {
      putchar('\\');
    }
    else {
      putchar(c);
    }
  }

  return 0;
}
