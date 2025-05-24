#include <iostream>

using namespace std;

int main(){

    int num[18];

    int somma = 0;
    int media = 0;

    for(int i = 0; i < 18; i++){
        cout << "Inserisci un numero: " << i + 1 << ": ";
        cin >> num[i];

        somma += num[i];

    }

    media = somma / 18;
    
    cout << "Media: " << media << endl;

return 0;
}