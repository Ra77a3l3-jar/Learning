#include <stdio.h>

int main(){
    
    char parola [20];

    printf("\n inserisci una parola di MAX 20 C: ");
    scanf("%s", parola);

    for (int  i = 1; i <= 10; i++) {
        printf("%s n %i\n", parola, i);
    }

    if (parola [0] == 'a'){
        printf("la parola inizia con la lettera A");
    }

return 0;

}