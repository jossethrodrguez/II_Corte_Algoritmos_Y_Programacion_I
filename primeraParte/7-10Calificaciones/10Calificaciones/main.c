#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculemos el promedio de 10 calificaciones\nes importante resaltar que solo tomare en cuenta las que esten entre 0 - 10\n");

    int contador = 0, suma = 0, calificacion = 0;
    float promedio = 0;

    for (contador = 1; contador <= 10 ;contador++){

        printf("\nIntroduce Calificacion %i: ", contador);
        scanf("%i", &calificacion);

        if (calificacion >= 0 && calificacion <= 10){
            suma = suma + calificacion;
        }

    }

    contador--; // esta es agregada porque el contador tiene uno adicional
                // puede comprobarlo con el codigo que esta comentado en la linea 28

    promedio = suma / contador;
    printf("\nel promedio de las calificaciones fue : %f\n", promedio);

    //printf("\n el valor del contador es : %i", contador);

    return 0;
}
