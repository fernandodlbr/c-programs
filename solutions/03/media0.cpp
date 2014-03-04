#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int nota,
      contador;
  double media = 0;

  do{

    printf("nota ");
    scanf(" %i", &nota);

    if(nota>0){
      media+=nota;
      contador++;
    }

  }while(nota>0);

  media/=contador;
  printf("media: %.2lf\n", media);

  return EXIT_SUCCESS;
}
