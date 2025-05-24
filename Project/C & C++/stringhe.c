#include <stdio.h>

int main() {
    
    int numSquadre = 3;

    char nome[3][150];
    char citta[3][150];
    int numTifosi[3];

    
    for (int i = 0; i < numSquadre; i++) {
        printf("Inserisci il nome della squadra %d: ", i + 1);
        scanf("%s", nome[i]);
        printf("Inserisci la città della squadra %d: ", i + 1);
        scanf("%s", citta[i]);
        printf("Inserisci il numero di tifosi della squadra %d: ", i + 1);
        scanf("%d", &numTifosi[i]);
        printf("\n");
    }

    
    printf("Dati delle squadre inserite:\n");
    for (int i = 0; i < numSquadre; i++) {
        printf("Squadra %d:\n", i + 1);
        printf("Nome: %s\n", nome[i]);
        printf("Città: %s\n", citta[i]);
        printf("Numero di tifosi: %d\n\n", numTifosi[i]);
    }

    return 0;
}
