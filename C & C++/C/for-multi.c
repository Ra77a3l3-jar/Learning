#include <stdio.h>

int main(){

    int i = 0;
    int cicli;

    int multi;

    printf("\n inserisci il numero di cicli: ");
    scanf("%i", &cicli);

    printf("\n inserisci il numero da moltiplicare: ");
    scanf("%i", &multi);

    for(i = 1; i <= cicli; i++){
        printf("\n%i * %i = %i", multi, i, multi * i);
    }
return 0;

}
