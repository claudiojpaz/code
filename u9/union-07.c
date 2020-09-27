#include <stdio.h>
#include <string.h>

union mensajes {
  char info[80];
  char aviso[80];
  char error[80];
};

int main (void)
{
  union mensajes msg;

  strcpy(msg.info, "Uso para ahorro de memoria");
  printf("%s\n" , msg.info);
  printf("Uso de memoria: %lu bytes\n", sizeof msg);

  return 0;
}
