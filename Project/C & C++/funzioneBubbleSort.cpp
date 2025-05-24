#include <iostream>

using namespace std;

int CreaDimensione () {
    int dimensione;
    do {
        cout << "Inserisci dimensione array : ";
        cin >> dimensione;
        cout << endl;
    } while (dimensione < 1);
    return dimensione;
}

bool TipoOrdine() {
    string risultato;
    cout << "Il sort lo vuoi crescente o decrescente: " << endl;
    cin >> risultato;

    if (risultato == "crescente" || risultato == "Crescente") {
        return true;
    } else if (risultato == "decrescente" || risultato == "Decrescente") {
        return false;
    } else {
        cout << "Input non valido. Riprova." << endl;
        return TipoOrdine();
    }
}
void RiempioArray (int array[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        cout << "Inserisci num " << i << " : " << endl;
        cin >> array[i];
    }
}

void BubbleSort (int array[], int dimensione, bool Decresente, bool Crescente) {
    if (Decresente) {
        for (int i = 0; i < dimensione - 1; i ++) {
            for (int j = 0; j < dimensione - 1 - i; j++) {
                if(array[j] < array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    } else {
        if (Crescente) {
            for (int i = 0; i < dimensione - 1; i ++) {
                for (int j = 0; j < dimensione - 1 - i; j++) {
                    if(array[j] > array[j + 1]) {
                        int temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                    }
                }
            }
        }
    }
}

void StampaArray (int array[], int dimensione) {
    cout << "Array ordinato " << endl;
    for (int i = 0; i < dimensione; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {

    int dimensione = CreaDimensione();

    bool crescente = TipoOrdine();

    int array[dimensione];
    RiempioArray(array, dimensione);

    BubbleSort(array, dimensione, !crescente, crescente);

    StampaArray(array, dimensione);

    return 0;

}