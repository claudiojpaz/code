#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  int jugadores = 0;

  if (argc == 3) {
    if (!strcmp(argv[1], "jugadores"))
        jugadores = atoi(argv[2]);

  } else {
    printf("Uso:\v%s jugadores N\n", argv[0]);
    printf("N es el número de jugadores que querés\n");
    return 1;
  }

  printf("Comenzando el juego con %d jugadores\n", jugadores);

  return 0;
}

