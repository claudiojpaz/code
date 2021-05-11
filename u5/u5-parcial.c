#include <stdio.h>

int main (void)
{
  int p1 = 5;
  int p2 = 5;
  int aprobado = 0;

  if (p1 >= 6) {
    if (p2 >= 6) {
      aprobado = 1;
    }
  }

  if (aprobado) {
    printf("Aprobado\n");
  } else {
    printf("Recupera\n");
  }

  return 0;
}
