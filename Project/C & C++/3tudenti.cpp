#include <stdio.h>

int main () {
    int numStudenti = 3;
    int numVoti = 3;
    printf("\nQuanti studenti vuoi analizzare: ");
    scanf("%d", &numStudenti);
    printf("\nQuanti voti vuoi inserire per studente: ");
    scanf("%d", &numVoti);

    for (int i = 0; i < numStudenti; i++) {
        int minVoto = 11;
        int maxVoto = 0;
        int sommaVoto = 0;
        int voto = 0;
        for (int j = 0; j < numVoti; j++) {
            printf("\nInserisci voto %d dello studente %d: ", j, i);
            scanf("%d", &voto);
            sommaVoto = sommaVoto + voto;
            if (voto > maxVoto) {
                maxVoto = voto;
            }
            if (voto < minVoto) {
                minVoto = voto;
            }
        }
        float mediaVoto = (float) sommaVoto / numVoti;
        printf("\n\n Lo Studente %d ha voto minimo: %d massimo: %d e media: %f", i, minVoto, maxVoto, mediaVoto);
    }
}