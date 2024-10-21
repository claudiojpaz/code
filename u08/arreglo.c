#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[]) {
  int modo = 0; // 0 = noob, 1 = god
  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "--god") == 0)
      modo = 1;
  }

  printf("Activando modo %s\n", modo == 1 ? "GOD": "NOOB" );
  return 0;
}

