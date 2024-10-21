#include <stdio.h>

union float_ieee754 {
  float dato;
  int dato_i;
  struct {
    unsigned int mant:23;
    unsigned int exp:8;
    unsigned int sign:1;
  } ieee754;
};

void print_n_bits (int dato, int inicio, int n) {
  unsigned int mask = 1<<inicio;

  for (int i = 0; i < n; i++) {
    printf("%d", mask & dato ? 1 : 0 );
    mask >>= 1;
  }
  printf("\n");
}


int main (void) {
  union float_ieee754 real = {3.125};

  printf("%u: ", real.ieee754.sign);
  print_n_bits(real.dato_i, 31, 1);
  printf("%u: ", real.ieee754.exp);
  print_n_bits(real.dato_i, 30, 8);
  printf("%u: ", real.ieee754.mant);
  print_n_bits(real.dato_i, 22, 23);

  print_n_bits(real.dato_i, 31, 32);

  return 0;
}

