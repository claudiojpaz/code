#include <stdio.h>

#define N 10

void fff(int vect[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d\n", vect[i]);

}

int main (void) {
  int arreglo[N] = {0,2};
  char *ca = "hola";

  printf("%s\n", ca);
  ca[0] = 'H';

  printf("%lu\n", sizeof arreglo);

  fff(arreglo, N);

  return 0;
}

