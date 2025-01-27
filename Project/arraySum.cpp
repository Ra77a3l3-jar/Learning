#include <iostream>

using namespace std;

int main(){

    int numeri[] = {12, 45, 3, 8, 6};

    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int somma = 0;

    for(int i = 0; i < lunghezza; i++){
        somma += numeri[i];
    }

    cout << "La somma dei numeri nel array e di: " << somma << endl;

return 0;
}