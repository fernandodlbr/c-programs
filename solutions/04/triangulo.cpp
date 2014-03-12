#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  char caracter = '*';
  int altura;

//  if(argc>1)
//    printf("*", caracter);

  printf("\nPon un numero para la altura deseada del triangulo: ");
  scanf("%i", &altura);

  for(int lado=0; lado<altura; lado++){
    for(int col=0; col<altura; col++)
      if(lado>=col) 
	printf("%s", argv[1]);
    printf("\n"); 
  }
  return EXIT_SUCCESS;
}
