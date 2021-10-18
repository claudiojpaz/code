#include <stdio.h>

enum dias {
  LUNES,
  MARTES,
  MIERCOLES,
  JUEVES,
  VIERNES,
  SABADO,
  DOMINGO
};

char *nombre_dia[] = {
  "lunes", "martes",
  "miércoles", "jueves",
  "viernes", "sábado",
  "domingo",
};

int main (void)
{
  enum dias hoy;

  for (hoy = LUNES; hoy <= DOMINGO; hoy++ )
    printf("Hoy es %s\n", nombre_dia[hoy]);
  return 0;
}

