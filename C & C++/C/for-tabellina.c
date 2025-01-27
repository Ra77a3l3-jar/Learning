#include <stdio.h>

int main(){

    int i = 0;
    int j = 0;
    int cicli;

    int maxN;

    printf("\n inserisci il numero di cicli: ");
    scanf("%i", &cicli);

    printf("\n inserisci il numero Max della tabella: ");
    scanf("%i", &maxN);
    printf("\n motiplicazione a tabella da 1 a %i ", maxN);

    for(i = 1; i <= cicli; i++){
        for (j = 1; j <= maxN; j++) { 
            printf("\n %dx%d = %d, ", i, j, i * j);  
        }
        printf("\n");  
    }

return 0;


}