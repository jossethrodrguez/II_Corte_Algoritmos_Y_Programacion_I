#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerNumero, segundoNumero, tercerNumero, cuartoNumero;

    printf("introduce 4 numeros \n");

    //  declarando las variables de user input
    printf("Introduce el primer numero: ");
    scanf("%d", &primerNumero);

    printf("Segundo numero: ");
    scanf("%d", &segundoNumero);

    printf("Tercer numero: ");
    scanf("%d", &tercerNumero);

    printf("Cuarto numero: ");
    scanf("%d", &cuartoNumero);


    int menoresDe15 = 0, mayorDe50 = 0, entre25_45 = 0;
    // codicionando las outputs de las variables

    if ( primerNumero <= 15){
        menoresDe15 = menoresDe15 + 1;
    } else if ( primerNumero >= 50) {
        mayorDe50 = mayorDe50 + 1 ;
    } else if ( primerNumero >= 25 && primerNumero <= 45){
        entre25_45 = entre25_45 + 1;
    } else {
        menoresDe15 = 0;
        mayorDe50 = 0;
        entre25_45 = 0;
    }

    if ( segundoNumero <= 15){
        menoresDe15 = menoresDe15 + 1;
    } else if ( segundoNumero >= 50) {
        mayorDe50 = mayorDe50 + 1 ;
    } else if ( segundoNumero >= 25 && segundoNumero <= 45){
        entre25_45 = entre25_45 + 1;
    } else {
        menoresDe15 = 0;
        mayorDe50 = 0;
        entre25_45 = 0;
    }

    if ( tercerNumero <= 15){
        menoresDe15 = menoresDe15 + 1;
    } else if ( tercerNumero >= 50) {
        mayorDe50 = mayorDe50 + 1 ;
    } else if ( tercerNumero >= 25 && tercerNumero <= 45){
        entre25_45 = entre25_45 + 1;
    } else {
        menoresDe15 = 0;
        mayorDe50 = 0;
        entre25_45 = 0;
    }

    if ( cuartoNumero <= 15){
        menoresDe15 = menoresDe15 + 1;
    } else if ( cuartoNumero >= 50) {
        mayorDe50 = mayorDe50 + 1 ;
    } else if ( cuartoNumero >= 25 && cuartoNumero <= 45){
        entre25_45 = entre25_45 + 1;
    } else {
        menoresDe15 = 0;
        mayorDe50 = 0;
        entre25_45 = 0;
    }





    printf("\nmenores de 15: %d \n", menoresDe15);
    printf("mayores de 50: %d \n", mayorDe50);
    printf("entre 25 y 45: %d \n", entre25_45);




    return 0;
}
