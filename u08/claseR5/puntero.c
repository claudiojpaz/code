#include <stdio.h>

void imprimir(int *p, int n) {
  for (int i = 0; i < n; i++)
    printf("%d\n", p[i]);

}

int main (void) {
  int vec[5] = {0,1,2,3,4};

  imprimir(vec, 5);

  return 0;
}

