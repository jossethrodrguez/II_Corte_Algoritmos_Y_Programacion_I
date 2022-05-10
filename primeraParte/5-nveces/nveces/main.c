#include <stdio.h>
#include <stdlib.h>

int main()
{
    int repiticion =0, numeroUsuario = 0;

    printf("introduce un numero y yo lo repetire cuantas veces sea el valor de este : ");
    scanf("%i", &numeroUsuario);

    for ( repiticion = 0; repiticion < numeroUsuario; repiticion = repiticion + 1){

        printf("* %i\n", numeroUsuario);
    }



    return 0;
}
