#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // declarando las variables
    int decision = 1, primerNumero = 0, segundoNumero = 0 ;

    printf(" Hola!, vamos a calcular el producto de dos numeros\n");


    while( decision == 1 )
    {
         printf("\nPor favor, solo ingrese numeros positivos menores de 120\n");

            // solictando datos del usuario
            printf("Ingrese primer numero: ");
            scanf("%i", &primerNumero);

            printf("\nIngrese segundo numero: ");
            scanf("%i", &segundoNumero);

            int producto = primerNumero * segundoNumero;

        // condicionando si los numeros son validos
        if ( (  (primerNumero < 0) || (segundoNumero < 0) ) || ( ( primerNumero > 120) || ( segundoNumero > 120) ) ) {
                 printf("Los numeros ingresados no son validos\n");
                 printf("quieres volver a empezar ?, introduce 1 para 'SI' y 0 para 'NO' :  ");
                 scanf("%i", &decision);

        } else if ( ( (primerNumero >= 0) && (segundoNumero >= 0) ) && ( ( primerNumero < 120) && ( segundoNumero < 120) ) ) {

            printf("El producto fue : %i", producto);
            printf("\n\nquieres volver a empezar ?, introduce 1 para 'SI' y 0 para 'NO' :  ");
            scanf("%i",& decision);

        }
           // condicionando si el ciclo se repite
             if ( decision == 1 ) {
            printf(" OK, empecemos !!! \n");
            } else if ( decision == 0 ) {
            printf(" Gracias por tu tiempo\n");
            } else {
            printf(" Por favor solo un 0 o un 1\n");
            }
    }


return 0 ;

}


