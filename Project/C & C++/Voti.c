#include <stdio.h>

int main(){

    float voto1, voto2, voto3;
    float somma;
    float media;

    printf("\n inserisci numero 1: ");
    scanf("%f", &voto1);

    printf("\n inserisci numero 2: ");
    scanf("%f", &voto2);

    printf("\n inserisci numero 3: ");
    scanf("%f", &voto3);

    somma = voto1 + voto2 + voto3;

    media = somma / 3;

    printf("\n la media e' di %0.2f ", media);

    if (media >= 6) {
        printf("\n la media e' sufficiente");

    }else{
        printf("\n la media e' insufficiente");
        
    }

    if ((voto1 > 6.5 && voto2 > 6.5) || (voto1 > 6.5 && voto3 > 6.5) || (voto2 > 6.5 && voto3 > 6.5)) {
        printf("\n almeno 2 numeri sono maggiori di 6.5");
    }else{
        printf("meno di 2 numeri sono maggiori di 6.5");
    }

}







