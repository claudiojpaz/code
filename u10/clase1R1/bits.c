#include <stdio.h>

void print_n_bits (unsigned int b, int n) {
  unsigned int mask = 1 << (n-1);

  for (int i = 0; i < n; i++) {
    // printf("%d", mask & b ? 1 : 0);
    if (mask & b)
      printf("1");
    else
      printf("0");

    mask >>= 1;
  }
  printf("\n");
}

void print_bits (unsigned char b) {
  unsigned char mask = 1 << 7;

  for (int i = 0; i < 8; i++) {
    // printf("%d", mask & b ? 1 : 0);
    if (mask & b)
      printf("1");
    else
      printf("0");

    mask >>= 1;
  }
  printf("\n");
}

struct ieee {
  unsigned int mantisa:23;
  unsigned int exponente:8;
  unsigned int signo:1;
};

union float_ieee {
  float dato;
  struct ieee ieee754;
  int dato_i;
};

int main(void){
  union float_ieee u;

  u.dato = 3.125;

  printf("%d  ", u.ieee754.signo);
  print_n_bits(u.ieee754.signo, 1);
  printf("%d  ", u.ieee754.exponente);
  print_n_bits(u.ieee754.exponente, 8);
  printf("%d  ", u.ieee754.mantisa);
  print_n_bits(u.ieee754.mantisa, 23);

  print_n_bits(u.dato_i, 32);
  return 0;
}

