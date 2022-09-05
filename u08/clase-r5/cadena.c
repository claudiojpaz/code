#include <stdio.h>

void busca(char **q) {
  for (; **q != ' '; (*q)++)
    ;

  (*q)++;
}

int main (void) {
  char nombres[40] = "claudio paz";
  char *p;

  p = nombres;

  printf("%s\n", p);
  busca(&p);
  printf("%s\n", p);

  return 0;
}

