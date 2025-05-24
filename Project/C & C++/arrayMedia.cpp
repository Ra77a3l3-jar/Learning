#include <iostream>

using namespace std;

int main(){

    int numeri[] = {5, 7, 3, 9, 1, 4, 2, 8, 6};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);

    int somma = 0;
    int media = 0;

    for(int  i = 0; i < lunghezza; i++){
        somma += numeri[i];
    }

    media = somma / lunghezza;

    cout << "La media del array e di: " << media << endl;
return 0;
}