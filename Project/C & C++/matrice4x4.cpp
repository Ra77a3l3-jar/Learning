#include <iostream>

using namespace std;

int main() {

    int matrice [4][4];
    bool uguale = true;

    cout << "Inserimento matrice" << endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >>  matrice[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++) {
        if ((matrice[i][0] == matrice[0][0]) && (matrice[i][3] == matrice[0][3])){
            uguale = true;
        } else {
            uguale = false;
        }
    }

    for (int j = 0; j < 4; j++) {
        if ((matrice[0][j] == matrice[0][0]) && (matrice[3][j] == matrice[3][0])){
            uguale = true;
        } else {
            uguale = false;
        }
    }

    if (uguale) {
        cout <<  "Tutti i valori sui lati della matrice sono uguali " << endl;
    } else {
        cout <<  "Non tutti i valori sui lati della matrice sono uguali " << endl;
    }

}