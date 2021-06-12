#include <stdio.h>

#define N 4

int main (void) {
  int notas[N];
  float promedio;
  int suma;

  for(int i = 0; i < N; i++) {
    do {
      printf("Ingrese una nota %d (1-10): ", i);
      scanf("%d", &notas[i]);
    } while (notas[i] < 1 || notas[i] > 10);
  }

  suma = 0;
  for(int i = 0; i < N; i++) {
    suma += notas[i];
  }

  promedio = (float) suma / N;

  for(int i = 0; i < N; i++) {
    printf("%d ", notas[i]);
  }

  printf("\nEl promedio es %.2f\n", promedio);


  return 0;
}

