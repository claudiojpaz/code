#include <stdio.h>

union ieee754 {
  float real;
  struct {
    unsigned int mantisa:23;
    unsigned int exp:8;
    unsigned int sign:1;
  } bits;
  struct {
    unsigned int b31:1;
    unsigned int b30:1;
    unsigned int b29:1;
    unsigned int b28:1;
    unsigned int b27:1;
    unsigned int b26:1;
    unsigned int b25:1;
    unsigned int b24:1;
    unsigned int b23:1;
    unsigned int b22:1;
    unsigned int b21:1;
    unsigned int b20:1;
    unsigned int b19:1;
    unsigned int b18:1;
    unsigned int b17:1;
    unsigned int b16:1;
    unsigned int b15:1;
    unsigned int b14:1;
    unsigned int b13:1;
    unsigned int b12:1;
    unsigned int b11:1;
    unsigned int b10:1;
    unsigned int b09:1;
    unsigned int b08:1;
    unsigned int b07:1;
    unsigned int b06:1;
    unsigned int b05:1;
    unsigned int b04:1;
    unsigned int b03:1;
    unsigned int b02:1;
    unsigned int b01:1;
    unsigned int b00:1;
  } bitss;
};

int main (void) {
  union ieee754 u = {3.125};

  printf("signo: %u\n", u.bits.sign);
  printf("exponent: %u\n", u.bits.exp);
  printf("mantisa: %u\n", u.bits.mantisa);

  printf("%u", u.bitss.b22);
  printf("%u", u.bitss.b22);
  printf("%u", u.bitss.b21);
  printf("%u", u.bitss.b20);
  printf("%u", u.bitss.b19);
  printf("%u", u.bitss.b18);
  printf("%u", u.bitss.b17);
  printf("%u", u.bitss.b16);
  printf("%u", u.bitss.b15);
  printf("%u", u.bitss.b14);
  printf("%u", u.bitss.b13);
  printf("%u", u.bitss.b12);
  printf("%u", u.bitss.b11);
  printf("%u", u.bitss.b10);
  printf("%u", u.bitss.b09);
  printf("%u", u.bitss.b08);
  printf("%u", u.bitss.b07);
  printf("%u", u.bitss.b06);
  printf("%u", u.bitss.b05);
  printf("%u", u.bitss.b04);
  printf("%u", u.bitss.b03);
  printf("%u", u.bitss.b02);
  printf("%u", u.bitss.b01);
  printf("%u", u.bitss.b00);


  return 0;
}

