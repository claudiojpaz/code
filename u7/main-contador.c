#include <stdio.h>
#include "contador.h"

int main (void) {

  for (int i = 0; i < 5; i++) {
    printf("%d \n", contador(i));
  }

  return 0;
}


