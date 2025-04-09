#include <iostream>
#include <vector>

using namespace std;

void dati (float km[], float* kmL, float* costo) {
    for (int i = 0; i < 3; i++) {
        cout << "Inserisci distanza " << i << " : " << endl;
        cin >> km[i];
    }

    cout << "Inserisci quanti km/L fa : " << endl;
    cin >> *kmL;

    cout << "Inserisci il costo della benzina : " << endl;
    cin >> *costo;
}

void prezzoTragitto (float km[], float kmL, float costo, float costoTot []) {
    for (int i = 0; i < 3; i++) {
        int litri = km[i] / kmL;
        costoTot[i] = litri * costo;
    }
}

int main() {

    float km [3];
    float kmL;
    float costo;
    float costoTot [3];

    dati (km, &kmL, &costo);

    prezzoTragitto (km, kmL, costo, costoTot);

    for (int i = 0; i < 3; i++) {
        cout << "Il costo per fare " << km[i] << " e di " << costoTot[i] << endl;
    }
return 0;
}
