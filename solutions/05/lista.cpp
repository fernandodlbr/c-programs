#include <stdio_ext.h>
#include <stdlib.h>

//void print(const cahr *inicio){

//  for(; *inicio != '\0'; inicio++)
//    printf("%c\n", *inicio);

//} Esto se haria con un valor print en el int main

int main(int argc, char *argv[]){

  const char *list[]={
    "bread",
    "toast",
    "bacon"
  };

  // for(int cont=0; list[i] != NULL; cont++)  Si hay valor NULL en la const

  for(int cont=0; cont<sizeof(list) / sizeof(char *); cont++)
    printf("%s \n", list[cont]);

  //  const int list_no = (sizeof list) / (sizeof list[0]);

  //  printf("%s\n", *list);
  //  printf("%s\n", (*list)+6);
  //  printf("%s\n", (*list)+12);

  return EXIT_SUCCESS;
}
