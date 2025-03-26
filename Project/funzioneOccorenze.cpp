#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int GeneraDimensione () {
    srand(time(NULL));
    return rand()% 20;
}

void RiempiArray (int array[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        array[i] = rand()% 21;
    }
}

int ControllOccorrenze (int array[], int dimensione)  {
    bool processati[21] = {false};
    int occorrenze[dimensione] = {0};

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

    int array[dimensione];

    RiempiArray (array, dimensione);

    cout << "La dimensione del array e: " << dimensione << endl;

    ControllOccorrenze (array, dimensione);

return 0;
}