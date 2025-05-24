#include <iostream>

using namespace std;

int main() {

    int matrice [6][6];
    int somma1 = 0;
    int somma2 = 0;

    bool palindroma = true;

    for (int i = 0; i  < 6; i++) {
        for (int j = 0; j < 6; j++) {
            somma1 += matrice[i][j];
            somma2 += matrice[6-1][j];
        }
        if (somma1 == somma2) {
            palindroma = true;
        } else {
            palindroma = false;
        }
    }

    if (palindroma) {
        cout << " La somma dei numeri tra le righe opposte e palindroma " << endl;
    } else {
        cout << " La somma dei numeri tra le righe opposte non e palindroma " << endl;
    }

}