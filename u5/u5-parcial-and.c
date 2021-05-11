#include <stdio.h>

int main (void)
{
  int p1 = 6;
  int p2 = 6;
  int aprobado = 0;

  if (p1 >= 6 && p2 >= 6) {
      aprobado = 1;
  }

  if (aprobado) {
    printf("Aprobado\n");
  } else {
    printf("Recupera\n");
  }

  return 0;
}
