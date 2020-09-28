#include <stdio.h>

typedef struct dato {
  int a;
  char b;
} dato_t ;

int main (void) {
  dato_t d1, d2;

  d1.a = 1;
  d1.b = 'c';

  d2.a = 2;
  d2.b = 'h';

  printf("miembro a = %d\n", d1.a );
  printf("miembro b = %c\n", d1.b );

  printf("miembro a = %d\n", d2.a );
  printf("miembro b = %c\n", d2.b );

  return 0;
}

