#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// Determina il colore del numero
string determinaColore(int numero) {
    if (numero == 0 || numero == 37) return "verde"; // 0 e 00 sono verdi
    int numeriNeri[] = {2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 30, 32, 34, 36};
    for (int num : numeriNeri) {
        if (numero == num) return "nero";
    }
    return "rosso"; // Altri numeri sono rossi
}

string giraRoulette() {
    int risultato = rand() % 38; // 38 risultati: 0-36 e 37 per "00"
    if (risultato == 37) return "00";
    return to_string(risultato);
}

void disegnoRoulette(){
        cout << "-----------------------------------\n"
         << "|  0  | 28 |  9 | 26 | 30 | 11 |  7 |\n"
         << "| 32  | 17 |  5 | 22 | 34 | 15 |  3 |\n"
         << "| 36  | 13 |  1 | 00 | 27 | 10 | 25 |\n"
         << "| 29  | 12 |  8 | 19 | 31 | 18 |  6 |\n"
         << "| 21  | 33 | 16 |  4 | 23 | 35 | 14 |\n"
         << "-----------------------------------\n";

}

int main() {
    srand(time(0));
    char giocaAncora;
    double portafoglio = 100.0;
    double puntata;

    cout << "Benvenuto alla Roulette Texana!" << endl;

    do {
        disegnoRoulette();
        cout << "Il tuo saldo attuale è: $" << portafoglio << endl;

        cout << "Fai la tua puntata (scommetti un importo): $";
        cin >> puntata;

        // Controllo puntata
        if (puntata <= 0 || puntata > portafoglio) {
            cout << "Importo non valido. Riprova." << endl;
            continue;
        }

        cout << "Scegli su cosa scommettere (numero, 'rosso', 'nero', 'verde'): ";
        string puntataGiocatore;
        cin >> puntataGiocatore;

        string risultato = giraRoulette();
        cout << "La roulette gira..." << endl;
        cout << "La pallina si è fermata su: " << risultato << endl;

        // Determina il colore del risultato
        string coloreRisultato = determinaColore(risultato == "00" ? 37 : stoi(risultato));

        // Verifica la vincita
        bool haVinto = false;
        if (puntataGiocatore == risultato) {

            cout << "Congratulazioni! Hai vinto la scommessa sul numero!" << endl;
            portafoglio += puntata * 35;
            haVinto = true;
        } else if ((puntataGiocatore == "rosso" && coloreRisultato == "rosso") ||
                   (puntataGiocatore == "nero" && coloreRisultato == "nero") ||
                   (puntataGiocatore == "verde" && coloreRisultato == "verde")) {

            cout << "Congratulazioni! Hai vinto la scommessa sul colore!" << endl;
            portafoglio += puntata;
            haVinto = true;
       } else {
        cout << "Mi dispiace, hai perso la scommessa." << endl;
        portafoglio -= puntata;
       }

       cout << "Il saldo del portafoglio e di $: " << portafoglio << endl;

       if (portafoglio <= 0) {
        cout << "Hai perso tutto! La partita è finita." << endl;
        break;
       }

       cout << "Vuoi giocare ancora? (s/n): ";
        cin >> giocaAncora;
    } while (giocaAncora == 's' || giocaAncora == 'S');

    cout << "Grazie per aver giocato alla Roulette Texana!" << endl;

    return 0;
}