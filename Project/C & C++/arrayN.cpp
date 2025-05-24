#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    int N;
    int array [N];
    int occorrenza[N];

    srand (time(NULL));

    while (true) {
        cout << "Inserisci la grandezza del array: " << endl;
        cin >> N;

        if (N > 20) {
        cout << "Reinserisci la grandezza del array: " << endl;
        cin >> N;
        }
    break;
    }

    for (int i = 0; i < N; i++) {
        array[i] = rand() % 21;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 1; j < N; j++) {
            if (array[i] == array[j]) {
                occorrenza[i]++;
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout <<  "Il numero " << array[i] << " e presente " << occorrenza[i] << "  volte. " << endl;
    }

}