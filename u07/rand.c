#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main (void) {
  float vec[N];

  srand(time(NULL));

  for (int i = 0; i < N; i++)
    /* vec[i] = ((rand()%2000)-1000) / 10.; */
    vec[i] = (rand()%2000-1000)/10.;


  for (int i = 0; i < N; i++)
    printf("%.3f\n", vec[i]);

  return 0;
}

