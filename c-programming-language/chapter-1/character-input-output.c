#include <stdio.h>

// int main() {
//   int c;

//   printf("EOF: %d", EOF);

//   c = getchar();

//   while (c != EOF) {
//     putchar(c);
//     c = getchar();
//   }
// }

// int main() {
//   long nc;

//   nc = 0;

//   while (getchar() != EOF) {
//     ++nc;
//   }

//   printf("%ld\n", nc);
// }

// int main() {
//   double nc;

//   for (nc = 0; getchar() != EOF; ++nc)
//     printf("%.0f\n", nc);
// }

// main() {
//   int c, nl;

//   nl = 0;

//   while ((c = getchar()) != EOF) {
//     if (c == '\n')
//       ++nl;

//     printf("%d\n", nl);
//   }
// }

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

//  count lines, words, characters in input
int main() {
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;

    if (c == '\n') {
      ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }

  return 0;
}
