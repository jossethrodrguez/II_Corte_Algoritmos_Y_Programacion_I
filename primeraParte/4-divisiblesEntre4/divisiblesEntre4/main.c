#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros = 0, cantidad = 0;

    printf("numeros de dos en dos del 1 al 100: ");

    for (numeros = 0; numeros <= 100; numeros = numeros + 2){
    printf("\n * %i", numeros);
   }

    for(numeros = 0; numeros <= 100; numeros = numeros + 4){
        if ( numeros % 4 == 0){
            cantidad++;
        }
        }
        printf("\ndel 1 al 100, hay %i numeros divisibles entre 4", cantidad);




    return 0;
}
