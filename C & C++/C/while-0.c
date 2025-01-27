#include <stdio.h>

int main(){

    int numero = 0;
    int somma = 0;

    printf("\n inserisci un numero intero se inserisci 0 finisco il programma ");

    while (1){
        printf("\n inserisci un numero: ");
        scanf("%d", &numero);

        if  (numero == 0){
            break;
        }

        if (numero > 0 || numero < 0){
            somma += numero;
        }

    }
    
    printf("\n la somma dei numeri interi e' %d", somma);

return 0;

}
