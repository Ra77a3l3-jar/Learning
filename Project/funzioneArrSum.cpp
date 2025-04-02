#include <iostream>
#include <vector>

using namespace std;

void RiempiArray (vector<int>& arr, int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        cout << "Inserisci n" << i << " : " << endl;
        cin >> arr[i];
    }
}

int Somma(const vector<int>& arr, int dimensione) {

    int somma = 0;
    
    for (int i = 0; i < dimensione; i++) {
        somma += arr[i];
    }

return somma;
}

int main() {

    int lunghezza;

    cout << "Inserisci la dimensione del array: " << endl;
    cin >> lunghezza;

    vector<int> array(lunghezza);

    RiempiArray(array, lunghezza);

    int sommArray = Somma(array, lunghezza);

    cout << "La somma dei elementi e: " << sommArray << endl;

return 0;
}