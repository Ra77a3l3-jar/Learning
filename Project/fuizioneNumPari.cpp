#include <iostream>

using namespace std;

void NunPari(int num) {
    for (int i = 0; i <= num; i++) {
        if(i %2 == 0) {
            cout << i << " " << endl;
        }
    }
}

int main() {
    int N;

    cout << "Inserisci un numero: " << endl;
    cin >> N;
    
    cout << "Stampo i numeri pari fino a: " << N << endl;
    NunPari(N);

return 0;
}