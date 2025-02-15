#include <iostream>
#include <string>

using namespace std;

int main(){

    struct Citta {
        int abitanti;
        string nome;
    };

    Citta citta1;
    Citta citta2;

    citta1.abitanti = 2000000;
    citta1.nome = "Roma";

    citta2.abitanti = 1600000;
    citta2.nome = "Milano";

    cout << "La prima citta e`: " << citta1.nome << " e ha " << citta1.abitanti << " abitanti" << endl;
    cout << "La senconda citta e`: " << citta2.nome << " e ha " << citta2.abitanti << " abitanti" << endl;
return 0;
}