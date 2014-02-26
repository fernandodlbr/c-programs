#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  const char *sentence = "The world is a vampire.";
  const char *beginning = sentence;
  const char *end = sentence;

  /* Move end to the last byte in sentence*/

  printf("%s\n", end); 

  return EXIT_SUCCESS;
}
