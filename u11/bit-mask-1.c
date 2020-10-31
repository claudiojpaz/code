#include <stdio.h>

int main (void)
{
  int n = 23;
  unsigned int num = 42;         // 0 0 1 0 1 0 1 0
  unsigned int mask = 1<<(n-1);  // 1 0 0 0 0 0 0 0

  for (int i = 0; i < n; i++) {
    printf("%d", mask & num ? 1 : 0);

    // int r = mask & num;
    // if ( r != 0 )
    //   printf("%d", 1);
    // else
    //   printf("%d", 0);

    mask = mask >> 1;
  }

  printf("\n");


  return 0;
}

