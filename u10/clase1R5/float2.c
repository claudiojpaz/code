#include <stdio.h>

typedef struct {
  unsigned int mantisa:23;
  unsigned int exponente:8;
  unsigned int signo:1;
} ieee754_t ;

union ieee_float {
  float dato;
  int dato_i;
  ieee754_t campos;
};

void imprimir_n_bits (int data, int n) {
  unsigned int mask = 1<<(n-1);

  for (int i = 0; i < n; i++) {
    printf("%d", mask & data ? 1 : 0);
    mask >>= 1;
  }

  printf("\n");
}

int main (void) {
  union ieee_float u;

  printf("Ingrese float: ");
  scanf("%f", &u.dato);

  printf("Signo: %u ", u.campos.signo);
  imprimir_n_bits(u.campos.signo, 1);
  printf("exponente: %u ", u.campos.exponente);
  imprimir_n_bits(u.campos.exponente, 8);
  printf("mantisa: %u ", u.campos.mantisa);
  imprimir_n_bits(u.campos.mantisa, 23);

  imprimir_n_bits(u.dato_i, 32);

  return 0;
}

