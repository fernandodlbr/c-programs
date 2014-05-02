#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

void reparto(int jugadores[], int num_jugadores, int num_cartas){

  static int posicion=0;

  for(int contador=num_cartas; contador>0; contador--) 
    jugadores[posicion++ % num_jugadores] += 1 ;
}

void error(char *argv[0]){
  fprintf(stderr, "Usage %s <number_of_players> <number_of_cards> \n", argv[0]);
  exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]){

  if(argc < 3)
    error(argv);

  int num_jugadores = atoi(argv[1]), 
      jugadores[num_jugadores], 
      num_cartas = atoi(argv[2]);

  memset(jugadores, 0, sizeof(jugadores));

  reparto(jugadores, num_jugadores, num_cartas);

  for(int contador=0; contador<num_jugadores; contador++)
    printf("Jugador%i: %i cartas\n", contador+1, jugadores[contador]);

  return EXIT_SUCCESS;
}
