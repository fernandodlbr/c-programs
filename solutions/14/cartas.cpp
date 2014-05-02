#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int a[] = {22, 3, 77, 50, 40, 23, 37, 35, 22, 2, 61, 71, 0};
  int auxiliar;
  int comparar = 0;
  int numeros = sizeof(a) / sizeof( int *); 

  for(int contador=0; contador<numeros; contador++){
    for(int siguiente = contador+1; siguiente<numeros; siguiente++)

      if(a[contador] > a[siguiente]){
	auxiliar = a[contador]; 
	a[contador] = a[siguiente];
	a[siguiente] = auxiliar;
      }
  }

  for(int i=0; i<numeros; i++)
    printf("%i ", a[i]); 
  printf("\n");

  return EXIT_SUCCESS;
}
