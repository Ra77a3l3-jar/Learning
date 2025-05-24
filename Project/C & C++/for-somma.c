#include <stdio.h>

int main(){

    int i = 0;
    int numeroCicli;

    int somma = 0;

    printf("\n inserisci il numero di cicli: ");
    scanf("%i", &numeroCicli);

    for( i = 1; i <= numeroCicli; i++){
        somma = somma + i;
        printf("%d ", i);
    }
    
    printf("\n la somma e' %i ", somma);

return 0;

}