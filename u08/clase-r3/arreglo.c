#include <stdio.h>

void cargar (int vec[]) {
  for (int i = 0; i < 10; i++)
    vec[i] = i;

}

int main (void) {
  int vector[10];

  printf("%ld\n", sizeof vector);
  cargar(vector++);

  return 0;
}

