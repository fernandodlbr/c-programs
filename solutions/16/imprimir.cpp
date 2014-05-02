#include <stdio_ext.h>
#include <stdlib.h>

void go_to_end( const char *sentence){

  if(*sentence == '\0')
    return;

  go_to_end(++sentence);
  printf("%c", *sentence);
}

int main (int argc, char *argv[]){

  const char *sentence = " The world is a vampire.";

  go_to_end(sentence);

  printf("\n");
  return EXIT_SUCCESS;
}
