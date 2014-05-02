#include <stdio_ext.h>
#include <stdlib.h>

int producto(int numero){
  if(numero <= 0)
    return 1;

  return numero*producto(numero-1);
}

int main (int argc, char *argv[]){

  int numero    = 0;
  int resultado = 0;

  printf("Introduce un numero: ");
  scanf(" %i", &numero);

  resultado = producto(numero);
  printf("%i \n", resultado);

  return EXIT_SUCCESS;
}
