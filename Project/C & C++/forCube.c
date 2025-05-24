#include <stdio.h>

int main(){

    int i = 0;
    int cicli;
    int quadrato;

    printf("\n inserisci il numero di cicli: ");
    scanf("%i", &cicli);

    for( i = 1; i <= cicli; i++){
        quadrato = i * i * i;
        printf("\n il cubo di %i e' %i", i, quadrato);
    }

return 0;

}