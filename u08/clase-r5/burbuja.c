#include <stdio.h>

#define N 10

void swap (int *p, int *q) {
  int tmp = *p;
  *p = *q;
  *q = tmp;
}


void burbuja(int *p, const int n) {
  for (int j = 0; j < n-1; j++)
    for (int i = 0; i < n-1-j; i++)
      if (*(p+i) > *(p+i+1))
        swap(p+i, p+i+1);

}

void imprimir(int *p, const int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", p[i]);

  printf("\n");
}


int main (void) {
  int nums[N] = {4,2,3,1,9,6,5,8,7,0};

  imprimir(nums, N);
  burbuja(nums, N);
  imprimir(nums, N);


  return 0;
}

