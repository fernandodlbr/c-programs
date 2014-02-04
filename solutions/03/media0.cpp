#include <stdio_ext.h>
#include <stdlib.h>
#define notas 10

int main(int argc, char *argv[]){

  double nota,
	 media = 0;

  for(int alumno=0; alumno<'0'; alumno+=1){

    printf("nota ");

    scanf(" %lf", &nota);

    media+=nota;
  }

  media/=notas;

  printf("media: %.2lf\n", media);
  return EXIT_SUCCESS;
}
