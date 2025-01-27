#include <iostream>
#include <string>

using namespace std;

int main() {
    string stringhe[50];
    int i = 0;

    while (true) {
        cout << "inserisci stringa " << i << " : ";
        cin >> stringhe[i];

        if (stringhe[i] == "stop") {
            break;
        }

        if (stringhe[i] == "pop") {
            if (i > 0) {
                i--;
                cout << "la stringa i-1 e : " << stringhe[i] << endl;
            } else {
                cout << "Non c'e nulla da togliere" << endl;
            }
        }else if (stringhe[i] == "+") {
            int result = stoi(stringhe[i-1]) + stoi(stringhe[i-2]);
            cout << "la somma delle stringhe e : " << result << endl;
        } else if (stringhe[i] == "-") {
            int result = stoi(stringhe[i-1]) - stoi(stringhe[i-2]);
            cout << "la differenza delle stringhe e : " << result << endl;
        } else if (stringhe[i] == "*") {
            int result = stoi(stringhe[i-1]) * stoi(stringhe[i-2]);
            cout << "il prodotto delle stringhe e : " << result << endl;
        } else if (stringhe[i] == "/") {
            int result = stoi(stringhe[i-1]) / stoi(stringhe[i-2]);
            cout << "il quoziente delle stringhe e : " << result << endl;
        } else {
            i++;
        }
    
    }

    return 0;
}