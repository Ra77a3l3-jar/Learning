#include <iostream>
#include <vector>

using namespace std;

int  main(){

    int  grandezza = 0;
    cout << "Inserisci la grandezza del vettore: ";
    cin >> grandezza;

    int array[grandezza];

    for (int i = 0; i < grandezza; i++) {
        cout << "Inserisci il valore: "<< endl;
        cin >> array[i];
    }

    bool ordinato = true;
    int giaFatto = grandezza - 1;

    while (ordinato) {

        ordinato = false;

        for (int i = 0; i < giaFatto ; i++) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                ordinato = true;
            }
        }
        giaFatto--;
    }

    for (int i = 0; i < grandezza; i++) {
        cout << array[i] << " ";
    }
return  0;
}