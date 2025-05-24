#include <iostream>

using namespace std;

int main() {
    char risposta;

    do {
        int numeri[10];
        int nuMax = 0;
        int nuMin = 0;
        int somma = 0;
        int media = 0;
        int numNumeri = 0;

        for (int i = 0; i < 10; i++) {
            cout << "Inserisci un numero: ";
            cin >> numeri[i];

            numNumeri++;

            nuMax = numeri[0];
            nuMin = numeri[0];

            if (numeri[i] > nuMax) {
                nuMax = numeri[i];
            }
            if (numeri[i] < nuMin) {
                nuMin = numeri[i];
            }

            somma += numeri[i];
        }
        media = somma / numNumeri;

        cout << "Il numero maggiore è: " << nuMax << endl;
        cout << "Il numero minore è: " << nuMin << endl;
        cout << "La somma dei numeri è: " << somma << endl;
        cout << "La media dei numeri è: " << media << endl;

        cout << "Vuoi rifare l'inserimento dei numeri? (s/n): ";
        cin >> risposta;

    } while (risposta == 's' || risposta == 'S');

    return 0;
}