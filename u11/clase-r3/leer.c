#include <stdio.h>

int main (void) {
  int legajo, p1, p2;
  FILE *fp;

  fp = fopen("notas.txt", "r");

  while (!feof(fp)) {
    int r = fscanf(fp, "%d %d %d", &legajo, &p1, &p2);
    if (r > 0)
      printf("%d %.2f\n", legajo, (p1+p2)/2.);
  }

  fclose(fp);
  return 0;
}

