#include <iostream>
#include <string>

using namespace std;

void richiesta (string& parola1, string& parola2) {
    cout << "Inserisci la prima parola: " << endl;
    cin >> parola1;

    cout << "Inserisci la seconda parola: " << endl;
    cin >> parola2;
}

void verifica (string parola1, string parola2) {
    bool trovata = false;

    if (parola2.size() >= parola1.size()) {
        for (int i = 0; i <= parola2.size() - parola1.size(); i++){     // con parola2 - parola1 non faccio controllo in aree dove la parola non puo essere contenuta
            if (parola2[i] == parola1[0]) {
                bool uguali = true;
                for (int j = 0; j < parola1.size(); j++) {      // metto a confronto la lettera di parola1 con la lettera di parola2, aumentando j passo alla prossima di parola1 e parola2
                    if (parola1[j] != parola2 [j + i]) {
                        uguali = false;
                        break;
                    }
                }
                // qua se il ciclo j finisce con uguali = true vuol dire che la parola 
                if (uguali) {
                    trovata = true;
                    cout << "La parola e contenuta" << endl;
                    break;
                }
            }
        }

        if (!trovata) {
            cout << "La parola non e contenuta" << endl;
        }
    } else {
        cout << "La parola1 e piu lunga di parola2" << endl;
    }
}

int main() {
    
    // con questo algoritmo vogliamo vedere se la prima parola e contenuta nella seconda

    string parola1;
    string parola2;

    richiesta (parola1, parola2);
    verifica (parola1, parola2);

    return 0;
}
