
#include <stdio.h>
#include <string.h>

int main()
{
    char fraseDelUsuario[100];
    int contador;

    printf("introduzca palabra\n");
    gets(fraseDelUsuario);

    for (contador = strlen(fraseDelUsuario); contador >= 0; contador--)
        putchar( fraseDelUsuario[contador]);

    return 0;
}
