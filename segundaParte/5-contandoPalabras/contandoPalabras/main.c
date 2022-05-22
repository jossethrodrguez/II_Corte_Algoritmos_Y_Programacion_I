#include <stdio.h>
#include <string.h>

int main (){
    char cadena [] = "Este es el ejercio numero ";
    int contadorDePalabras = 0, contador = 0, longitud = strlen(cadena);

    for( contador = 0; contador < longitud ; contador++)
    {
        // esto evalua el almacen de un array, si esta vacio, es decir " " procede a evaluar el siguiente
        // y si el siguiente no esta vacio lo suma como si fuera un palabra
        if(cadena[contador] == ' ' && cadena[contador+1] != ' ')
        {
            contadorDePalabras++;
        }
    }
    printf("%s %d \n", cadena, contadorDePalabras);

    return 0;
}
