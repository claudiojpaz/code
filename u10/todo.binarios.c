#include <stdio.h>

struct estudiante {
  char nombre[80];
  int legajo;
  int nota_final;
};

void cargar_registro(FILE*);
void leer_registo(FILE*, int);
void leer_todo(FILE*);
void modificar_registro(FILE*, int);

int main (void) {

  return 0;
}

