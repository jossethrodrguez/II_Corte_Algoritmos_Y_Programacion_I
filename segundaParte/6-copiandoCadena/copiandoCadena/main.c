#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabraDelUSuario [30], palabraCopiada [30];

    printf("Introduce una palabra: ");
    gets(palabraDelUSuario);

    strcpy(palabraCopiada, palabraDelUSuario);

    printf("Tu escribiste: %s\n", palabraCopiada);




    return 0;
}
