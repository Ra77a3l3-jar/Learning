#include <iostream>

using namespace std;

int main(){

    int numeri[] = {5, 7, 3, 6 , 12, 9, 1, 8, 4, 2};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);

    int numTrovare;
    bool trovato = false;

    cout << "Inserisci il numero che vuoi cercare: ";
    cin >> numTrovare;

    for(int i = 0; i < lunghezza; i++){
        if(numeri[i] == numTrovare)
          trovato = true;

    }

    if(trovato) cout << "Il numero che volevi e stato trovato dentro l'array" << endl;
    else cout << "Il numero che cercavi non sta dentro l'array" << endl;
    return 0;
}