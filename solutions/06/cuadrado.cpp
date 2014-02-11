#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int altura;
  printf("\nPon un numero para la altura deseada del cuadrado: ");
  scanf("%i", &altura);

  for(int lado=0; lado<altura; lado++){
    for(int col=0; col<altura; col++)
      if(lado==0 || lado==altura-1 || col==0 || col==altura-1) 
	printf("*");
      else
	printf(" ");
    
    printf("\n"); 
  }
  return EXIT_SUCCESS;
}
