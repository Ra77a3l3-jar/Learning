#include <iostream>
#include <string>

using namespace std;

int main(){

    struct Citta {
        int abitanti;
        string nome;
    };

    Citta citta[3];

    for (int i = 0; i < 3; i++) {
        cout << "Inserisci la citta: ";
        cin >> citta[i].nome;
        cout << "Inserisci il numero di abitanti: ";
        cin >> citta[i].abitanti;
    }

    for (int i = 0; i < 3; i++) {
        cout << "Citta: " << citta[i].nome << " - Abitanti: " << citta[i].abitanti << endl;
    }
return 0;
}