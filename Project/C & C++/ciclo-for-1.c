#include <stdio.h>

int main(){

    int i = 0;
    int numeroCicli;

    printf("\n inserisci il numero di cicli: ");
    scanf("%i", &numeroCicli);

    for( i = 0; i <= numeroCicli; i++){
        printf("\n ho fatto la pizza %d\n", i);

    }

    return 0;

}