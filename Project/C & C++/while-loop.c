#include <stdio.h>

int main(){

    int i = 0;

    printf("\n stampo numeri da 0 a 10");

    while (i <= 10){                                                                                // stampo da  0 a 10 fino a quando i non diventa 10

        printf("\n %d", i);
        i++;
    }

    printf("\n");

    i = 10; 

    printf("\n stampo numeri da 10 a 0");

    while (i >= 0 ){                                                                                // stampo da 10 a 0 fino a quando i non diventa 0
        
        printf("\n %d", i);
        i--;
    }
    
return 0;

}
