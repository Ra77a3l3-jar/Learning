#include <stdio.h>

int main(){

int i = 0;

int somma = 0;

for(i = 1; i <= 100; i++){
    somma += i;

    if(somma >= 500){
        break;
    }
}

printf("\n la somma dei numeri e: %d", somma);

return 0;

}