#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

int GeneraDimensione () {
    srand(time(NULL));
    return rand()% 20 + 1;
}

void RiempiArray (vector<int>& array, int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        array[i] = rand()% 21;
    }
}

void ControllOccorrenze (const vector<int>& array, int dimensione, int occorrenze[])  {
    bool processati[21] = {false};

    for (int i = 0; i < dimensione; i++) {
        if (!processati[array[i]]) {
            int conta = 0;
            for (int j = 0; j < dimensione; j++) {
                if (array[i] == array[j]) {
                    conta++;
                }
            }
            occorrenze[array[i]] = conta;

            processati[array[i]] = true;
        }
    }
}

int main() {

    int dimensione = GeneraDimensione ();

    int occorrenze[21] = {0};
    vector<int> array(dimensione);

    RiempiArray (array, dimensione);

    cout << "La dimensione del array e: " << dimensione << endl;

    ControllOccorrenze (array, dimensione, occorrenze);

    cout << "Occorrenze degli elementi:" << endl;
    for (int i = 0; i < 21; i++) {
        if (occorrenze[i] > 0) {
            cout << "Valore " << i << ": " << occorrenze[i] << " occorrenze" << endl;
        }
    }

return 0;
}