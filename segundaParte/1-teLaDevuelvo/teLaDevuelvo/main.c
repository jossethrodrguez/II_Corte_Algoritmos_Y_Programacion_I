#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fraseDelUsuario[30];

    printf("Introduce algo y yo te lo devolvere en pantalla: ");
    scanf("%s", &fraseDelUsuario);

    printf("\n%s\n",fraseDelUsuario);
    return 0;
}
