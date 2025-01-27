#include <stdio.h>

int main(){

    int i = 1;
    int sommma = 0;

    while (i <= 100) {
        sommma += i;
        i++;
    }

    printf("\n la somma di tutti i numeri da  1 a 100 e' %d\n", sommma);

return 0;

}