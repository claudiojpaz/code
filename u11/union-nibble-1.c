#include <stdio.h>

union int_byte {
  unsigned int entero;
  unsigned char byte0;
};

unsigned char get_high_nibble (unsigned int);
unsigned char get_low_nibble (unsigned int);
void imprimir_byte(unsigned char);
void imprimir_nibble_naive(unsigned char);
void imprimir_nibble_pedantic(unsigned char);
void imprimir_nbits(unsigned int, int);

int main (void)
{
  unsigned int val;
  unsigned char val_low, val_high;

  do {
    printf("Ingrese un entero de 8 bits sin signo: ");
    scanf("%u", &val);
    if (val < 0 || val > 255)
      printf("Número fuera de rango\n");

  } while (val < 0 || val > 255);

  val_low = get_low_nibble(val);
  val_high = get_high_nibble(val);

  imprimir_byte(val);

  printf("\nNibble alto: ");
  imprimir_nibble_naive(val_high);
  // imprimir_nibble_pedantic(val_high);
  // imprimir_nbits(val_high, 4);
  printf(" (%d)\n", val_high);

  printf("Nibble bajo: ");
  imprimir_nibble_naive(val_low);
  printf(" (%d)\n", val_low);

  return 0;
}

unsigned char get_high_nibble (unsigned int b)
{
  union int_byte ib = {.entero=b};

  ib.byte0 >>= 4;

  return ib.byte0;
}

unsigned char get_low_nibble (unsigned int b)
{
  union int_byte ib = {.entero=b};
  unsigned char mask_low_nibble = 0x0f; // 0x0f = 0 0 0 0 1 1 1 1
  //unsigned char mask_high_nibble = 017;    //  0 0  0 0 1  1 1 1

  ib.byte0 &= mask_low_nibble;

  return ib.byte0;
}

void imprimir_byte(unsigned char b)
{
  unsigned char mask = 1 << 7;

  for (int i = 0; i < 8; i++) {
    int r = mask & b;
    if (r != 0)
      printf("1");
    else
      printf("0");

    mask = mask >> 1;
  }
}

void imprimir_nibble_naive(unsigned char n)
{
  unsigned char mask = 1 << 3;

  for (int i = 0; i < 4; i++) {
    int r = mask & n;
    if (r != 0)
      printf("1");
    else
      printf("0");

    mask = mask >> 1;
  }
}

void imprimir_nibble_pedantic(unsigned char n)
{
  unsigned char mask = 1 << 3;

  for (int i = 0; i < 4; i++) {
    printf("%d", mask & n ? 1 : 0);
    mask >>= 1;
  }
}

void imprimir_nbits(unsigned int b, int n)
{
  unsigned char mask = 1 << (n-1);

  for (int i = 0; i < n; i++) {
    printf("%d", mask & b ? 1 : 0);
    mask >>= 1;
  }
}
