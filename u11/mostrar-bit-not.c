#include <stdio.h>

union byte_char {
  char dato;
  struct {
    unsigned int b0:1;
    unsigned int b1:1;
    unsigned int b2:1;
    unsigned int b3:1;
    unsigned int b4:1;
    unsigned int b5:1;
    unsigned int b6:1;
    unsigned int b7:1;
  } byte;
};

void print_bits(char c) {
  union byte_char d;
  d.dato = c;
  printf("%d%d%d%d", d.byte.b7, d.byte.b6, d.byte.b5, d.byte.b4);
  printf("%d%d%d%d\n", d.byte.b3, d.byte.b2, d.byte.b1, d.byte.b0);
}

int main (void) {
  //char GPIO = 34;    //  0 0 1 0 0 0 1 0  0x22
  char GPIO = 42;    //  0 0 1 0 1 0 1 0  0x22
  char maskb3 = 8;   //  0 0 0 0 1 0 0 0  0x08

  print_bits(GPIO);

  GPIO = GPIO & ~maskb3;

  print_bits(GPIO);

  return 0;
}

