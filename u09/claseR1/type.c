#include <stdio.h>

typedef int* pint;

int main(void){
  int var = 3;

  pint p = &var;

  printf("%d\n", *p);

  return 0;
}

