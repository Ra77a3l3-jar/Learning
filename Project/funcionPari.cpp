#include <iostream>

using namespace std;

void numeriPari (int n) {
    for (int i = 2; i < n; i += 2) {
        cout << i << endl;
    }
}

int main(){

    int numero;

    cout << "Inserisci un numero: " << endl;
    cin >> numero;

    cout << "I numeri pari prima di " << numero << " sono :" << endl;
    numeriPari(numero);
}