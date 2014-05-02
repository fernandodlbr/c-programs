#include <stdio_ext.h>
#include <stdlib.h>
#define N 10

int factorial(int n){
  if(n <= 0)
    return 1;

  return n * factorial(n-1);
}

double e(int numeros){
  if(numeros < 0)
    return 0;

  return 1. / factorial(numeros) + e(numeros - 1);
}

int main (int argc, char *argv[]){

  printf("%lf \n", e(N));
  return EXIT_SUCCESS;
}
