
#include <stdio.h>

int main(){

    int eta;
    char sesso;

    printf("\n quanti anni hai? :  ");
    scanf("%d", &eta);

    printf("Sei maschio o femmina? (M/F): ");
    scanf(" %c", &sesso);

    if (sesso == 'M' || sesso == 'm') {
        printf("Hai selezionato maschio.\n");
        } 
        else if (sesso == 'F' || sesso == 'f') {
        printf("Hai selezionato femmina.\n");
        }
        else{
            printf("Input non valido.\n");
        }

        return 0;
}
