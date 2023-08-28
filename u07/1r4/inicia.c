#include <stdio.h>

int main (void) {
  int vec[] = {
    1,
    2,3,
    4,5,6,
    /* 7,8,9, */
    NULL
  };

  printf("%lu\n", sizeof vec);


  for (int i = 0; vec[i] != NULL; i++)
    printf("i = %d %3d ", i, vec[i]);

  return 0;
}

