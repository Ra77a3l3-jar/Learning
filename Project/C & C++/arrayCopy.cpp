#include <iostream>

using namespace std;

int main(){

    int numeri[] = {5, 9, 8, 4, 7, 3, 8, 2, 1, 6};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int numeriCopy[lunghezza];

    for(int i = 0; i < lunghezza; i++){
        numeriCopy[i] = numeri[i];
    }

    cout << "I elementi copiati del array numeri in numeriCopy sono:" << endl;
    for(int i = 0; i < lunghezza; i++){
        cout << numeriCopy[i] << endl;
    }
    cout << endl;

return 0;
}