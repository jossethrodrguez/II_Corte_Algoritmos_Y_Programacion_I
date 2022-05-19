#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra [] = "tu calificacion es: ";

    int longitud = sizeof(palabra) - 1; // se le resta para que no tome "\0" en cuenta
    printf("%s %i\n", palabra, longitud);

    return 0;
}
