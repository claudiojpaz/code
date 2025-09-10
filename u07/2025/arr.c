#include <stdio.h>

#define N 5

int main (void) {
  int vec[N];

  for (int i = 0; i < N; i++) {
    do {
      printf("Ingrese el elemento vec[%d]: ", i);
      scanf("%d", &vec[i]);
    } while (vec[i] < 0);
  }


  for (int i = 0; i < N; i++)
    printf("%d\n", vec[i]);

  return 0;
}

