#include <stdio.h>

union float_int {
  float real;
  int entero;
};

union float_ieee {
  struct ieee754 {
    int signo:1;
    int exponente:8;
    int mantisa:23;
  } ieee;
  float dato;
};

void print_bits (int c) {
  unsigned int mask = 1<<31;

  for (int i = 0; i < 32; i++) {
    printf("%d", c & mask ? 1 : 0);
    mask >>= 1;
  }

  printf("\n");
}


int main (void) {
  union float_int u;

  printf("Ingrese un número: ");
  scanf("%f", &u.real);

  print_bits(u.entero);

  int signo = get_sign(u.real);
  int mantisa = get_mantisa(u.real);
  int exponente = get_exponente(u.real);

  printf("s: %d (%d)\n", signo, signo);
  printf("e: ");
  print_n_bits(exponente, 8);
  printf(" (%d)\n", exponente);

  printf("m: ");
  print_n_bits(mantisa, 23);
  printf(" (%d)\n", matisa);

  return 0;
}

