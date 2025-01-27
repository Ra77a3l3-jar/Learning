#include <iostream>

using namespace std;

int main() {
    int num;

    while (true) {
        cout << "Inserisci un numero: ";
        cin >> num;

        if (num > 0) {
            num = num / 2;

            cout << "Output: ";
            for (int i = 0; i < num; i++) {
                cout << "X";
            }
            cout << endl;
        } else if (num < 0) {
            cout << "Output: ";
            for (int i = 0; i < -num; i++) {
                cout << "Y";
            }
            cout << endl;
        }

        if (num == 0 || num > 1000) break;
    }

    return 0;
}