#include <stdio.h>

int main (void) {

  for (int j = 0; j < 5; j++) {
    printf("  ");
    for (int i = 0; i <= j; i++) {
      printf("*");
    }
    printf("\n");
  }

  printf("  chau\n");

  return 0;
}

