#include <stdio.h>

#define N 100

void swap (int *p, int *q) {
  int tmp = *p;
  *p = *q;
  *q = tmp;
}

void burbuja (int *p, const int n) {
  for (int j = 0; j < n-1; j++)
    for (int i = 0; i < n-1-j; i++)
      if (*(p+i) > *(p+i+1))
        swap(p+i, p+i+1);
}

void imprimir (int *p, int n) {
  for (int i = 0; i < n; i++)
    //printf("%d ", *(p+i));
    printf("%d ", p[i]);

  printf("\n");
}

int main (void) {
  int nums[N] = {5,4,1,3,7,9,2,8,6,0};
  int m = 9;

  imprimir(nums, ++m);
  burbuja(nums, m);
  imprimir(nums, m);

  return 0;
}

