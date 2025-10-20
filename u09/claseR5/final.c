#include <stdio.h>

typedef struct {
  unsigned int mantisa:23;
  unsigned int exponente:8;
  unsigned int signo:1;
} ieee754_t ;

typedef struct {
  unsigned int b00:1;
  unsigned int b01:1;
  unsigned int b02:1;
  unsigned int b03:1;
  unsigned int b04:1;
  unsigned int b05:1;
  unsigned int b06:1;
  unsigned int b07:1;
  unsigned int b08:1;
  unsigned int b09:1;
  unsigned int b10:1;
  unsigned int b11:1;
  unsigned int b12:1;
  unsigned int b13:1;
  unsigned int b14:1;
  unsigned int b15:1;
  unsigned int b16:1;
  unsigned int b17:1;
  unsigned int b18:1;
  unsigned int b19:1;
  unsigned int b20:1;
  unsigned int b21:1;
  unsigned int b22:1;
  unsigned int b23:1;
  unsigned int b24:1;
  unsigned int b25:1;
  unsigned int b26:1;
  unsigned int b27:1;
  unsigned int b28:1;
  unsigned int b29:1;
  unsigned int b30:1;
  unsigned int b31:1;
} bits_t ;

union ieee_float {
  float dato;
  ieee754_t campos;
  bits_t bits;
};

int main (void) {
  union ieee_float u;

  printf("Ingrese float: ");
  scanf("%f", &u.dato);

  printf("Signo: %u\n", u.campos.signo);
  printf("exponente: %u\n", u.campos.exponente);
  printf("mantisa: %u\n", u.campos.mantisa);

  printf("%d ", u.bits.b31);
  printf("%d", u.bits.b30);
  printf("%d", u.bits.b29);
  printf("%d", u.bits.b28);
  printf("%d", u.bits.b27);
  printf("%d", u.bits.b26);
  printf("%d", u.bits.b25);
  printf("%d", u.bits.b24);
  printf("%d ", u.bits.b23);
  printf("%d", u.bits.b22);
  printf("%d", u.bits.b21);
  printf("%d", u.bits.b20);
  printf("%d", u.bits.b19);
  printf("%d", u.bits.b18);
  printf("%d", u.bits.b17);
  printf("%d", u.bits.b16);
  printf("%d", u.bits.b15);
  printf("%d", u.bits.b14);
  printf("%d", u.bits.b13);
  printf("%d", u.bits.b12);
  printf("%d", u.bits.b11);
  printf("%d", u.bits.b10);
  printf("%d", u.bits.b09);
  printf("%d", u.bits.b08);
  printf("%d", u.bits.b07);
  printf("%d", u.bits.b06);
  printf("%d", u.bits.b05);
  printf("%d", u.bits.b04);
  printf("%d", u.bits.b03);
  printf("%d", u.bits.b02);
  printf("%d", u.bits.b01);
  printf("%d", u.bits.b00);

  return 0;
}
