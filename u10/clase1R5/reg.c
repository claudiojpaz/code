#include <stdio.h>

int main(void){
  char reg = 0x2; // 0 0 0 0 0 0 1 0

  char mask3 = 8; // 0 0 0 0 1 0 0 0
  char mask4 = 16;// 0 0 0 1 0 0 0 0

  reg = reg | mask4;

  if (mask4 & reg)
    printf("Led encendido\n");
  else
    printf("Led apagado\n");

  reg = reg ^ mask4;

  if (mask4 & reg)
    printf("Led encendido\n");
  else
    printf("Led apagado\n");

  reg = reg ^ mask4;

  if (mask4 & reg)
    printf("Led encendido\n");
  else
    printf("Led apagado\n");

  reg = reg | mask4;
  reg = reg & ~mask4;

  if (mask4 & reg)
    printf("Led encendido\n");
  else
    printf("Led apagado\n");

  return 0;
}

