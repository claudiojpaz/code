#include <stdio.h>

int main (void) {
  int vec[10] = {0,1,2,3,4,5,6,7,8,9};

  for(int i = 0, j = 9; i < 10; i++, j--)
    printf("%d %d\n", vec[i], vec[j]);

  return 0;
}

