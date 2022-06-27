#include <stdio.h>

#define N 10

int main (void) {
  int nums[N] = {4,2,3,1,9,6,5,0,7,8};

  for (int i = 0; i < N; i++)
    printf("%d ", nums[i]);

  printf("\n\n");

  for (int i = 0; i < N-1; i++) {
    int minimo = i;
    for (int j = i+1; j < N; j++) {
      if (nums[j] < nums[minimo])
        minimo = j;
    }
    int tmp = nums[i];
    nums[i] = nums[minimo];
    nums[minimo] = tmp;
  }

  for (int i = 0; i < N; i++)
    printf("%d ", nums[i]);

  printf("\n");

  return 0;
}

