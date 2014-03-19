#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  const char *sentence = "The world is a vampire.";
  const char *beginning = sentence;
  const char *end = sentence;

  // mover el puntero hasta el final de la frase 
  do{
    *end++;
  }while(*end != '\0');

// reducir el puntero end hasta que sea igual que beginning
  do{
    end--;
    printf("%c", *end); 
  }while(*end != *beginning);

  printf("\n");

  return EXIT_SUCCESS;
}
