#include <stdio.h>

struct dato {
  int a;
  char b;
  float temp[10];
};

struct otro_dato {
  int a;
  char b;
  float temp[10];
};

int main (void) {
  struct dato d1, d2 = {1, 'c', {1,2,3,4} } ;

  d1 = d2;

  printf("miembro a = %d\n", d1.a );
  printf("miembro b = %c\n", d1.b );
  printf("miembro temo[0] = %.2f\n", d1.temp[0] );

  return 0;
}

