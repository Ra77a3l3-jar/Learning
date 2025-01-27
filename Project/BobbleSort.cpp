#include <iostream>

using namespace std;

int main(){

    int numeri[30];

    for (int i = 0; i < 30; i++){
        cout << "inserisci il numero " << i << " : ";
        cin >> numeri[i];
    }

    for(int  i = 0; i < 30; i++){
        for(int j = i + 1; j < 30; j++){
            if(numeri[i] < numeri[j]){
                int temp = numeri[i];
                numeri[i] = numeri[j];
                numeri[j] = temp;
            }
        }
    }

    cout << endl;
    cout << "Numeri ordinati: " << endl;
    cout<< endl;

    for(int i = 0; i < 30; i ++){
        cout << numeri[i] << endl;
    }
    return 0;
}