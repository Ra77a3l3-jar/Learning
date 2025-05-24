#include <iostream>

using namespace std;

int main() {
    int costoProdotto;
    int budget = 100;
    int prodotti = 0;

    while (true) {
        cout << "Inserisci il costo del prodotto: ";
        cin >> costoProdotto;

        if (budget < costoProdotto) {
            cout << "Non puoi acquistare questo prodotto, il tuo budget è troppo basso." << endl;
            break;
        }

        budget -= costoProdotto;
        prodotti++;
        cout << "Prodotto acquistato, Budget rimanente: " << budget << endl;

        if (budget == 0) {
            break;
        }
    }

    cout << "Hai acquistato " << prodotti << " prodotti." << endl;

    return 0;
}