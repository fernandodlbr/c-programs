#include <stdio_ext.h>
#include <stdlib.h>

#define N 70

int main(int argc, char *argv[]){

    int primo[N];
    int primo_siguiente = 1;                           
    primo[0] = 2;

/*
Mostrar 70 primos
  dividir el posible primo entre los otros primos
  añadir el nuevo primo a la lista de primos
*/

    for(int candidato = 3; primo_siguiente < N; candidato++){ 
        bool puede_ser_primo = true;
        
        for (int posicion_primo=0; 
                puede_ser_primo && posicion_primo < primo_siguiente; 
                posicion_primo++)
            if (candidato % primo[posicion_primo] == 0)
                puede_ser_primo = false;
        
        if (puede_ser_primo)
            primo[primo_siguiente++] = candidato;
        
    }

    for(int i=0; i<N; i++)
        printf("%i ", primo[i]);
    printf("\n");

    return EXIT_SUCCESS;
}
