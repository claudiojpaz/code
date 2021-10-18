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

int main (void)
{
  enum dias hoy;

  hoy = MIERCOLES;

  if (hoy == LUNES)
    printf("Hay Informática I\n");
  else
    printf("No hay Informática I\n");
  return 0;
}

