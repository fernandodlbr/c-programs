#include <stdio_ext.h>
#include <stdlib.h>

// Este programa suma varios numeros con dos decimales

int main(int argc, char *argv[]){

  double contador = 0;

  for(int argumento=1; argumento < argc; argumento++)
    contador += atof(argv[argumento]);

  printf("%.2lf\n", contador);

  return EXIT_SUCCESS;
}
