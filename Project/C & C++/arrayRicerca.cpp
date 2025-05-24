#include <iostream>
#include <string>
#include <limits.h>

using namespace std;

int main(){

    int array[8];
    int ricerca;

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0; i < 8; i++){
        cout << "Inserisci un numero: ";
        cin >> array[i];
    }

    cout << "Inserisci il numero che vuoi ricercare: ";
    cin >> ricerca;

    for(int i = 0; i < 8; i++){
        if(array[i] == ricerca){
            cout << "Il numero " << ricerca << "è stato trovato alla posizione " << i << endl;
        }

        if(array[i] < min){
            min = array[i];
        }

        if(array[i] > max){
            max = array[i];
        }
    }

    cout << "Il valore max e: " << max << endl << "Il valore minimo e: " << min << endl;
return 0;
}