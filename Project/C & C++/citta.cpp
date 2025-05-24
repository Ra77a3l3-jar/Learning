#include <iostream>
#include <string>

using namespace std;

int main() {
    int abitanti;
    string citta;

    int numCitta = 0;
    int abitantiTotali = 0; // Per calcolare la media

    string cittaMax;
    int abitantiMax = 0;

    bool abitanti5k = true;
    bool Madrid = false;
    bool Parigi = false;

    int tentativi = 0;

    while (tentativi < 10) {
        cout << "Inserisci la citta: ";
        cin >> citta;

        if (citta == "Olso") {
            break; // Esci se la città è "Olso"
        }

        cout << "Inserisci il numero di abitanti: ";
        cin >> abitanti;

        abitantiTotali += abitanti;
        numCitta++;

        if (abitanti > abitantiMax) {
            abitantiMax = abitanti;
            cittaMax = citta;
        }

        
        if (citta == "Madrid") {
            Madrid = true;
        }
        if (citta == "Parigi") {
            Parigi = true;
        }

        if (abitanti <= 5000) {
            abitanti5k = false;
        }

        tentativi++;
    }

    if (numCitta > 0) {
        double abitantiMedia = static_cast<double>(abitantiTotali) / numCitta;
        cout << "Media abitanti: " << abitantiMedia << endl;
        cout << "Città con più abitanti: " << cittaMax << " con " << abitantiMax << " abitanti." << endl;
        cout << "Città Madrid presente: " << (Madrid ? "Sì" : "No") << endl;
        cout << "Città Parigi presente: " << (Parigi ? "Sì" : "No") << endl;
        cout << "Tutte le città hanno più di 5000 abitanti: " << (abitanti5k ? "Sì" : "No") << endl;
    } else {
        cout << "Nessuna città inserita." << endl;
    }

    return 0;
}