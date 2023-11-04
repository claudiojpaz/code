#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
  int jugadores = -1;

  if (argc == 3)
    if (strcmp(argv[1], "-jugadores") == 0)
      jugadores = atoi(argv[2]);

  printf("jugadores: %d\n", jugadores);

  return 0;
}

