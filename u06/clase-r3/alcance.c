#include <stdio.h>

void imprime_var (int var) {
  {
  int var = 3;

  printf("%d\n", var);
  }

}

int main (void) {
  imprime_var(4);

  return 0;
}

