#include <stdio.h>

int main (void) {
  int n;

  printf("\tingrese un número: ");
  scanf("%d", &n);

  switch (n) {
    case 1:
      printf("\tingresó un uno\n");
      break;
    case 2:
      printf("\tingresó un dos\n");
      break;
    case 3:
      printf("\tingresó un tres\n");
      break;
    default:
      printf("\tdesconocido\n");

  }


  return 0;
}

