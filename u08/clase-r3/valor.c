#include <stdio.h>

void carga(const int var) {
  printf("%d\n", var);
}



int main (void) {
  int var = 4;

  for (int i = 0; i < 10; i++){
    var = i;
    carga(var);
  }

  return 0;
}

