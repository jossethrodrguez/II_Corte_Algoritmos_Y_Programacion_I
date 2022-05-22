#include <stdio.h>
#include <string.h>

int main (){

    char cadena [30] = "ma,sa", marcador = strtok(cadena, ",");
    //printf("Ingresa una frase\n");
    //gets(cadena);

    int contadorDelCaracter = 0, contador = 0, longitud = strlen(cadena);


    while (marcador = true){
        contadorDelCaracter++ ;
    }


    printf("%d \n", contadorDelCaracter);

    return 0;
}
