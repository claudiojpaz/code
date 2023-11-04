#include <stdio.h>

#define N 10

void ordenar_menor_a_mayor_insercion (int [], int);
void imprimir_arreglo (int [], int);
void quicksort (int item[], int left, int right);

int main (void) {
  int vec[N] = {37, 2, 6, 4, 89, 8, 10, 12, 68, 45};

  imprimir_arreglo(vec, N);
  quicksort(vec, 0, N-1);
  imprimir_arreglo(vec, N);

  return 0;
}

void imprimir_arreglo (int vec[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%5d", vec[i]);
  }
  printf("\n");
}

void quicksort (int item[], int left, int right) {
  int i, j, temp;

  i = left;
  j = right;

  do {
    while (item[i] < item[j] && i < j)
      j--;

    if (i < j) {
      temp = item[i];
      item[i] = item[j];
      item[j] = temp;
      i++;
    }

    while ( item[i] < item[j] && i < j)
      i++;

    if(i < j) {
      temp = item[i];
      item[i] = item[j];
      item[j] = temp;
      j--;
    }

  } while (i < j);

  if (left < j)
    quicksort(item, left, j-1);

  if (i < right)
    quicksort (item, i+1, right);

}
