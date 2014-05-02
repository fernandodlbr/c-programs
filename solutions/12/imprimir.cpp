#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]){

  const char *list[] = {"yield", "yelp", "yellow"};
  int comparado, 
      palabra;
  const char *temporal;

  palabra=(sizeof(list)/sizeof(char *));

  for(int comp1=0; comp1<palabra; comp1++)
    for(int comp2=comp1+1; comp2<palabra; comp2++){

      comparado=strcmp(list[comp1], list[comp2]);

      if(comparado>0){
	temporal    = list[comp1];
	list[comp1] = list[comp2];
	list[comp2] = temporal;
      }
    }

  for(int imp=0; imp<palabra; imp++)
    printf("%s\n", list[imp]);

  return EXIT_SUCCESS;
}
