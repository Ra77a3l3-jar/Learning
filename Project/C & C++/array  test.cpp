#include <iostream>

using namespace std;

int main(){

    int voti [5];

    int i = 0;

    for( i =0 ; i < 5 ; i++ ){
        cout << "Inserisci i voti dei 5 studenti: ";
        cin >> voti[i];
        cout << endl;
    }

    for(i = 0; i < 5; i++){
        cout << " Voti inseriti: " << voti[i] << endl;
    }

return 0;

}