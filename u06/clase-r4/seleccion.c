#include <stdio.h>

#define N 10

int main (void) {
  int nums[N] = {5,4,1,3,7,9,0,8,6,2};

  for (int i = 0; i < N; i++)
    printf("%d ", nums[i]);

  printf("\n");

  for (int j = 0; j < N-1; j++) {
    int minimo = j;
    for (int i = j+1; i < N; i++) {
      if (nums[i] < nums[minimo])
        minimo = i;
    }

    int tmp = nums[j];
    nums[j] = nums[minimo];
    nums[minimo] = tmp;
  }

  for (int i = 0; i < N; i++)
    printf("%d ", nums[i]);

  printf("\n");

  return 0;
}

