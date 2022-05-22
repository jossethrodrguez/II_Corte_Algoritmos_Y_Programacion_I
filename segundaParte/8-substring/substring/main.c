#include <stdio.h>
#include <string.h>

int main(){

    char *string = "Yo voy a seleccionar un cadena de esta cadena";
    char substring[12];

    memcpy(substring,&string[33], 12);
    substring[12] = '\0';
    printf("%s\n",string);
    printf("\n... y he elegido :%s",substring);

    return 0;
}
