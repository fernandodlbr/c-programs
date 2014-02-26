#include <stdio_ext.h>
#include <stdlib.h>

/* Este programa suma hasta dos numeros con dos decimales */

double add(double op1, double op2){

  return op1 + op2;
}

int main(int argc, char *argv[]){

  double param1, param2;

  if (argc<0){

    return EXIT_FAILURE;
  }

  param1 = atof(argv[1]);
  param2 = atof(argv[2]);

  printf("%.2lf\n", add(param1, param2));

  return EXIT_SUCCESS;
}
