#include <stdio.h>

int main (void) {
  char cadena[10] = {'h', 'o', 'l', 'a'};
  char cadena1[] = "chau";
  char *cadena2 = "chau";

  printf("%s\n", cadena1); // preferible

  for (int i = 0; i < 4; i++)
    printf("%c", cadena[i]);

  printf("\n");

  printf("%p\n", cadena);
  printf("%p\n", cadena1);
  printf("%p\n", cadena2);

  return 0;
}

