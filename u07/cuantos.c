#include <stdio.h>
#define N 5

int main (void) {
  int n;
  int vec1[N] = {5,5,5,5,5};
  int vec[N] = {1,2,3,4,5,6,7};
  int vec2[N] = {1};

  do {
    printf("Cuantos elementos quiere: ");
    scanf("%d", &n);
  } while (n < 1 || n > N);

  for (int i = 0; i < n; i++)
    vec[i] = 1;

  for (int i = 0; i < n; i++)
    printf("%d\n", vec[i]);

  return 0;
}

