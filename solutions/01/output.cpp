#include <stdio_ext.h>
#include <stdlib.h>
#define MAX 40

int main(int argc, char *argv[]){

  char frase[MAX];

  printf("Introduce tu frase: ");

  gets(frase);

  // El scanf solo lee la primera palabra
  // scanf("%s", &*frase);

  for(int repite=0; repite<10; repite++)
    printf("%s\n", frase);

  return EXIT_SUCCESS;
}
