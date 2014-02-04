#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int altura;
printf("\nPon un numero para la altura deseada del triangulo: ");
scanf("%i", &altura);

  for(int lado=0; lado<altura; lado++){
    printf("\n");
    for(int col=0; col<altura; col++)
      if(lado>=col) 
	printf("*");
  }

  printf("\n"); 

  return EXIT_SUCCESS;
}
