#include <stdio.h>

union int_4char {
  int entero;
  char byte[4];
  char caract;
};

int main(void){
  union int_4char u;

  u.entero = 0x301;
  u.caract = 0;

  printf("%d\n", u.byte[0]);
  printf("%d\n", u.byte[1]);
  printf("%d\n", u.byte[2]);
  printf("%d\n", u.byte[3]);

  printf("%d\n", u.entero);


  return 0;
}

