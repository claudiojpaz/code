#include <stdio.h>

#define N 100

void swap (int *p, int *q);
void burbuja (int *p, int n);
void imprimir (int *p, int n);

int main (void) {
  int nums[N] = {3,1,2,9,5,4,7,6,8,0};

  imprimir(nums, 10);
  burbuja(nums, 10);
  imprimir(nums, 10);

  return 0;
}

void burbuja (int *p, int n) {
  for (int j = 0; j < n-1; j++) {
    for (int i = 0; i < n-1-j; i++) {
      if (*(p+i) > *(p+i+1)) {
        swap(p+i, p+i+1);
      }
    }
  }
}

void swap (int *p, int *q) {
  int tmp = *p;
  *p = *q;
  *q = tmp;
}


void imprimir (int *p, int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", p[i]);

  printf("\n");
}

