#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

//  usar sizeof

  const char *list[]={
    "bread",
    "toast",
    "bacon"
  };

//  const int list_no = (sizeof list) / (sizeof list[0]);

// for(int cont=0; list[i] != NULL; cont++)  Si hay valor NULL en la const

for(int cont=0; cont<sizeof(list) / sizeof(char *); cont++)
  printf("%s \n", list[cont]);

//  printf("%s\n", *list);
//  printf("%s\n", (*list)+6);
//  printf("%s\n", (*list)+12);

  return EXIT_SUCCESS;
}
