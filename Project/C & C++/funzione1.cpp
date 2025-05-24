#include <iostream>

using namespace std;

int somma(int a, int b) {
    return a + b;
}

int main() {
    int a;
    int b;

    for (int i = 0; i < 2; i++) {
        cout << "Inserisci il numero " << i + 1 << ": ";
        if (i == 0) {
            cin >> a;
        } else {
            cin >> b;
        }
    }

    cout << "La somma dei numeri e` : " << somma(a, b) << endl;
return 0;
}