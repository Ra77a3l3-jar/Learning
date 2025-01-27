#include <stdio.h>

int main(){

    int i = 0;
    int numero;
    int somma = 0;

    float media;

    int numeroCicli;

    printf("\n inserisci il numero di cicli: ");
    scanf("%i", &numeroCicli);

    for( i = 1; i <= numeroCicli; i++){
        printf("\nInserisci il numero %d: ", i);

        scanf("%i", &numero);

        somma += numero;
    }

    media = somma / numeroCicli;

    printf("\n la media e %f e la somma e %i",  media, somma);

    return 0;

}