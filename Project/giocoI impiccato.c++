#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // rand() and srand()
#include <ctime>   // time()
#include <algorithm>

using namespace std;

const int tentativiMAX = 10;

int main() {
    string parole[] = {
        "elefante",
        "amicizia",
        "castello",
        "serenita",
        "lampadina",
        "avventura"
    };

    srand(time(0)); // random seed
    string parolaSegreta = parole[rand() % (sizeof(parole) / sizeof(parole[0]))];

    vector<char> lettereParolaSegreta(parolaSegreta.begin(), parolaSegreta.end());
    vector<char> lettereIndovinate;
    int tentativi = tentativiMAX;

    cout << "Benvenuto al gioco dell'impiccato!" << endl;

    while (tentativi > 0) {
        char lettera;
        cout << "Tentativi rimasti: " << tentativi << endl;
        cout << "Inserisci una lettera: ";
        cin >> lettera;

        // Vedo se la lettera e gia stata indovinata
        if (find(lettereIndovinate.begin(), lettereIndovinate.end(), lettera) != lettereIndovinate.end()) {
            cout << "Hai già indovinato questa lettera. Prova un'altra." << endl;
            continue;
        }

        lettereIndovinate.push_back(lettera);

        // Vedo se la lettera e contenuta nella parola
        if (find(lettereParolaSegreta.begin(), lettereParolaSegreta.end(), lettera) != lettereParolaSegreta.end()) {
            cout << "Bravo! La lettera '" << lettera << "' è nella parola." << endl;
        } else {
            tentativi--;
            cout << "Spiacente! La lettera '" << lettera << "' non è nella parola." << endl;
        }

        // Vedo se ho indovinato tutte le lettere
        bool parolaIndovinata = true;
        for (char c : lettereParolaSegreta) {
            if (find(lettereIndovinate.begin(), lettereIndovinate.end(), c) == lettereIndovinate.end()) {
                parolaIndovinata = false;
                break;
            }
        }

        if (parolaIndovinata) {
            cout << "Complimenti! Hai indovinato la parola: " << parolaSegreta << endl;
            break;
        }
    }

    if (tentativi == 0) {
        cout << "Hai esaurito i tentativi! La parola era: " << parolaSegreta << endl;
    }

    return 0;
}