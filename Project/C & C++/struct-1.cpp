#include <iostream>
#include <string>

using namespace std;

struct PersonStruct {
    string nome;
    int eta;
    string cittaNascita;
};

int main() {

    PersonStruct cittadino1;

    cout << "Inserisci il nome: " << endl;
    cin >> cittadino1.nome;

    cout << "Inserisci l'eta : " << endl;
    cin >> cittadino1.eta;
    
    cout << "Inserisci la citta dove sei nato : " << endl;
    cin >> cittadino1.cittaNascita;

    cout << "Ti chiami " << cittadino1.nome << " hai " << cittadino1.eta << " e sei nato a " << cittadino1.cittaNascita << endl;

    return 0;
}
