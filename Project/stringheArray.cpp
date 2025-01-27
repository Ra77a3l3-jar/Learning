#include <iostream>

using namespace std;

int main(){

    string stringhe[50];
    int i = 0;

    while (true) {
        cout << "inserisci stringa " << i << " : ";
        cin >> stringhe[i];

        if (stringhe[i] == "stop") {
            break;
        }

        if (stringhe[i] == "pop") {
            i--;
            cout << "la stringa i-1 e : " << stringhe[i] << endl;
        } else {
            i++;
        }

        if (i == 50) {
            i = 0;
        }
    }
    return 0;
}