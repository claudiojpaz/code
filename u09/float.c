#include <stdio.h>

union float_ieee754 {
  float dato;
  struct {
    unsigned int mant:23;
    unsigned int exp:8;
    unsigned int sign:1;
  } ieee754;
  struct {
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
  } bit;
};

void print_bits (float dato) {
  union float_ieee754 real = {dato};

  printf("%u", real.bit.b31);
  printf("%u", real.bit.b30);
  printf("%u", real.bit.b29);
  printf("%u", real.bit.b28);
  printf("%u", real.bit.b27);
  printf("%u", real.bit.b26);
  printf("%u", real.bit.b25);
  printf("%u", real.bit.b24);
  printf("%u", real.bit.b23);
  printf("%u", real.bit.b22);
  printf("%u", real.bit.b21);
  printf("%u", real.bit.b20);
  printf("%u", real.bit.b19);
  printf("%u", real.bit.b18);
  printf("%u", real.bit.b17);
  printf("%u", real.bit.b16);
  printf("%u", real.bit.b15);
  printf("%u", real.bit.b14);
  printf("%u", real.bit.b13);
  printf("%u", real.bit.b12);
  printf("%u", real.bit.b11);
  printf("%u", real.bit.b10);
  printf("%u", real.bit.b09);
  printf("%u", real.bit.b08);
  printf("%u", real.bit.b07);
  printf("%u", real.bit.b06);
  printf("%u", real.bit.b05);
  printf("%u", real.bit.b04);
  printf("%u", real.bit.b03);
  printf("%u", real.bit.b02);
  printf("%u", real.bit.b01);
  printf("%u", real.bit.b00);
  printf("\n");
}


int main (void) {
  union float_ieee754 real = {3.125};

  printf("%u\n", real.ieee754.sign);
  printf("%u\n", real.ieee754.exp);
  printf("%u\n", real.ieee754.mant);

  print_bits(real.dato);

  return 0;
}

