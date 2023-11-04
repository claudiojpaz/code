#include <stdio.h>
#define N 8

void ordenar_menor_a_mayor (int [], int);
void imprimir_arreglo (int [], int);

int main (void) {
    int vec[8] = {4,1,6,5,3,10,7,2};

    imprimir_arreglo(vec, N);
    ordenar_menor_a_mayor(vec, N);
    imprimir_arreglo(vec, N);

    return 0;
}

void swap (int *p, int *q) {
  int tmp = *p;
  *p = *q;
  *q = tmp;
}

void ordenar_menor_a_mayor (int vec[], int n) {
    for (int j = 0; j < n-1; j++)
        for (int i = 0; i < n-1-j; i++)
            if (vec[i] > vec[i+1])
                swap(vec+i, vec+i+1);
}

void imprimir_arreglo (int vec[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%5d", vec[i]);
    }
    printf("\n");
}
