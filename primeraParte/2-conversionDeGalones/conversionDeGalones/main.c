#include <stdio.h>
#include <stdlib.h>


int main()
{
    int galon;
    float litros;

    printf("Galones(gal) \t\t litros(L) \n");

    for(galon = 10; galon <= 20; galon ++){

        litros = galon * 3.787;
        printf("%d gal \t\t=\t %f L \n", galon, litros);

    }


    return 0;
}
