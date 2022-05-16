#include <stdio.h>

int main (void) {
  int n1=10, n2=20, n3=30, n4=40;

  if (n1 == n2 && n3 == n4 && n1 == n3)
    printf("Son iguales\n");
  else {
    if (n1 > n2 && n1 > n3 && n1 > n4)
      printf("%d es el mayor\n", n1);
    if (n2 > n1 && n2 > n3 && n2 > n4)
      printf("%d es el mayor\n", n2);
    if (n3 > n1 && n3 > n2 && n3 > n4)
      printf("%d es el mayor\n", n3);
    if (n4 > n1 && n4 > n2 && n4 > n3)
      printf("%d es el mayor\n", n4);

    if (n1 < n2 && n1 < n3 && n1 < n4)
      printf("%d es el menor\n", n1);
    if (n2 < n1 && n2 < n3 && n2 < n4)
      printf("%d es el menor\n", n2);
    if (n3 < n1 && n3 < n2 && n3 < n4)
      printf("%d es el menor\n", n3);
    if (n4 < n1 && n4 < n2 && n4 < n3)
      printf("%d es el menor\n", n4);

  }

  return 0;
}

