#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  int tmp;
  int jugadores = 0;
  FILE *fp;
  char buff[50] = {0};

  if (argc == 2) {
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
      printf("No se pudo abrir el archivo\n");
      return 1;
    }
    fscanf(fp, "%s %d", buff, &tmp);
    if (!strcmp(buff, "jugadores"))
        jugadores = tmp;
    fclose(fp);
  } else {
    printf("Uso:\v%s archivo.conf\n", argv[0]);
    return 1;
  }

  printf("Comenzando el juego con %d jugadores\n", jugadores);

  return 0;
}

