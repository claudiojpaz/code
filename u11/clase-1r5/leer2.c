#include <stdio.h>

int main (void) {
  FILE *fp;
  int temp;

  fp = fopen("/sys/devices/platform/coretemp.0/hwmon/hwmon2/temp1_input", "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo...\n");
    return 1;
  }

  fscanf(fp, "%d", &temp);
  printf("La temperatura del cpu0 es: %.2f\n", temp/1000.);

  fclose(fp);
  return 0;
}

