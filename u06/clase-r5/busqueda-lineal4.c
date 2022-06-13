#include <stdio.h>

#define N 15

int main (void) {
  int notas[N] = {3,1,2,4,3,9,4,5,6,9,3,7,1,8,3};
  int inotas[N];
  int busqueda;
  int c_busqueda;

  for (int i = 0; i < N; i++)
    inotas[i] = -1;

  busqueda = 3;
  c_busqueda = 0;
  for (int i = 0; i < 5; i++) {
    if (notas[i] == busqueda) {
      inotas[c_busqueda] = i;
      c_busqueda++;
    }
  }

  printf("Encontré el %d: %d veces\n", busqueda, c_busqueda);
  for (int i = 0; inotas[i] != -1; i++)
    printf("%d ", inotas[i]);

  return 0;
}

