#include <stdio.h>

#define PIN0 1    // 00000001
#define PIN1 2    // 00000010
#define PIN2 4    // 00000100
#define PIN3 8    // 00001000
#define PIN4 16   // 00010000
#define PIN5 32   // 00100000
#define PIN6 64   // 01000000
#define PIN7 128  // 10000000

int main (void) {
  unsigned char sel = 0;
  unsigned char io = 0;

  sel = PIN7 | PIN6 | PIN5 | PIN4;

  printf("%x\n", sel);

  printf("%x\n", io);
  io |= PIN3; //on
  printf("%x\n", io);
  io |= PIN0; //on
  printf("%x\n", io);

  if (io & PIN3)
    printf("Encendido\n");
  else
    printf("Apagado\n");

  io ^= PIN3; //toggle
  printf("%x\n", io);
  io &= ~PIN3;//off
  printf("%x\n", io);
  io &= ~PIN3;//off
  printf("%x\n", io);

  return 0;
}

