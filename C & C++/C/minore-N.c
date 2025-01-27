#include <stdio.h>

int main(){

    int i = 0;

    int n;

    printf("\n inserisci il valore di n: ");
    scanf("%i", &n);

    for(i = 1; i < n; i++){
        printf("\n\t%d", i);
    }
    
return 0;

}