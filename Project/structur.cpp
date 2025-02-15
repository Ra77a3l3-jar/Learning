#include <iostream>
#include <string>

using namespace std;

int main(){

    struct Citta {
        int abitanti;
        string nome;
    };

    Citta citta[3];

    citta[0].abitanti = 1000;
    citta[0].nome = "Andalo";

    citta[1].abitanti = 2000;
    citta[1].nome = "Trento";

    citta[2].abitanti= 6340;
    citta[2].nome = "La Solina";

    cout << "Le citta sono " << endl;
    cout << "Citta: " << citta[0].nome << " Abitanti: " << citta[0].abitanti << endl;
    cout << "Citta: " << citta[1].nome << " Abitanti: " << citta[1].abitanti << endl;
    cout << "Citta: " << citta[2].nome << " Abitanti: " << citta[2].abitanti << endl;
}