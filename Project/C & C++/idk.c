#include <stdio.h>
#include <string.h>
#include <conio.h> 

#define MAX_TENTATIVI 6
#define MAX_LETTERE 100

void richiediParolaSegreta(char *parolaSegreta, int lunghezzaMax) {
    printf("Inserisci la parola segreta (max %d caratteri): ", lunghezzaMax - 1);
    for (int i = 0; i < lunghezzaMax - 1; i++) {
        char lettera = getch(); 
        if (lettera == '\r') { 
            break;
        }
        parolaSegreta[i] = lettera;
        printf("*");
    }
    parolaSegreta[lunghezzaMax - 1] = '\0';
    printf("\n");
}

void giocaPartita(const char *parolaSegreta) {
    int parolaLunghezza = strlen(parolaSegreta);
    char lettereIndovinate[MAX_LETTERE] = {0};
    int tentativi = 0;
    int indovinato = 0;

    printf("Parola: ");
    while (tentativi < MAX_TENTATIVI && indovinato < parolaLunghezza) {

        for (int i = 0; i < parolaLunghezza; i++) {
            if (strchr(lettereIndovinate, parolaSegreta[i])) {
                printf("%c ", parolaSegreta[i]);
                indovinato++;
            } else {
                printf("_ ");
            }
        }
        printf("\nLettere indovinate: %s\n", lettereIndovinate);

        char lettera;
        printf("Inserisci una lettera: ");
        scanf(" %c", &lettera);

        if (strchr(lettereIndovinate, lettera)) {
            printf("Hai già indovinato questa lettera. Riprova.\n");
            continue;
        }

        lettereIndovinate[tentativi] = lettera;
        lettereIndovinate[tentativi + 1] = '\0';

        if (strchr(parolaSegreta, lettera) == NULL) {
            tentativi++;
            printf("Lettera sbagliata! Tentativi rimasti: %d\n", MAX_TENTATIVI - tentativi);
        }
    }

    if (indovinato == parolaLunghezza) {
        printf("Complimenti! Hai indovinato la parola: %s\n", parolaSegreta);
    } else {
        mostraImpiccato(tentativi);
        printf("Hai perso! La parola era: %s\n", parolaSegreta);
    }
}

int main() {
    char parolaSegreta[MAX_LETTERE];
    richiediParolaSegreta(parolaSegreta, MAX_LETTERE);
    giocaPartita(parolaSegreta);
    return 0;
}