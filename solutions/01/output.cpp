#include <stdio_ext.h>
#include <stdlib.h>
#include <wctype.h>

int main(int argc, char *argv[]){

  char frase[20];

  printf("Introduce tu frase: ");

  scanf("%s", &*frase);

//for (int contador=0; contador<20; contador++);

  for(int repite=0; repite<10; repite++)
    printf("%s\n", frase);

  return EXIT_SUCCESS;
}
