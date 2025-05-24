#include <iostream>

using namespace  std;

int main() {

    int  matrice [5][10];

    int i;
    int j;

    int celle = 0;

    do {
        cout << "Inserisci l'indice i (0-4): " << endl;
        cin >> i;
    } while (i < 0 || i >= 5);
    
    do {
        cout << "Inserisci l'indice j (0-9): " << endl;
        cin >> j;
    } while (j < 0 || j >= 10);

    // Conta delle celle vicine
    int contatore = 0;
    
    // cella sopra
    if (i > 0 && matrice[i-1][j] > 0) {
        contatore++;
    }
    
    // cella sotto
    if (i < 5-1 && matrice[i+1][j] > 0) {
        contatore++;
    }
    
    // cella a sinistra
    if (j > 0 && matrice[i][j-1] > 0) {
        contatore++;
    }
    
    // cella a destra
    if (j < 10-1 && matrice[i][j+1] > 0) {
        contatore++;
    }
    
    // cella in alto a sinistra
    if (i > 0 && j > 0 && matrice[i-1][j-1] > 0) {
        contatore++;
    }
    
    // cella in alto a destra
    if (i > 0 && j < 10-1 && matrice[i-1][j+1] > 0) {
        contatore++;
    }
    
    // cella in basso a sinistra
    if (i < 5-1 && j > 0 && matrice[i+1][j-1] > 0) {
        contatore++;
    }
    
    // cella in basso a destra
    if (i < 5-1 && j < 10-1 && matrice[i+1][j+1] > 0) {
        contatore++;
    }

    cout << "La cella i & j ha : " << celle << " adiacenti " << endl;

}