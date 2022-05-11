#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Hello world!\n");

    int altura = 0, base = 0, alturaUsuario = 0, baseUsuario = 0, decision = 0;

    printf("Vamos a 'dibuar' un rectangulo usando solo '*'\n");
    printf("solamente introduce el valor de la base y la altura\n");
    printf("quieres comenzar ? (1 para si, 0 para no: ");
    scanf("%i", &decision);

    if ( decision == 0){
        printf("ok, aqui estare, saludos\n");
    } else if (decision == 1){

        // primero solictando los valores al usuario
        printf("primero introduce el valor de la base: ");
        scanf("%i", &baseUsuario);

        printf("ahora la altura: ");
        scanf("%i", &alturaUsuario);

        // impriendo rectangulo en pantall
        for(altura = 0; altura < alturaUsuario; altura++){
            printf("\n *");

            for(base = 0; base < ( baseUsuario -1); base++){
            printf(" *");
            }

        }
    }
    return 0;
}
