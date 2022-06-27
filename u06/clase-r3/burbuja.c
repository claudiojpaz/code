#include <stdio.h>

#define N 10

int main (void) {
  int nums[N] = {3,1,2,9,5,4,7,6,8,0};

  for (int i = 0; i < N; i++)
    printf("%d ", nums[i]);

  printf("\n");

  for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1-j; i++) {
      if (nums[i] > nums[i+1]) {
        int tmp = nums[i];
        nums[i] = nums[i+1];
        nums[i+1] = tmp;
      }
    }
  }

  for (int i = 0; i < N; i++)
    printf("%d ", nums[i]);

  printf("\n");

  return 0;
}

