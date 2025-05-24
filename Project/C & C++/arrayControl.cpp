#include <iostream>
#include <vector>

using namespace std;

int main() {

    int grandezza;
    int array [grandezza];
    
    bool Crescente = true;

    cout << "Inserisci la grandezza del array: " << endl;
    cin >> grandezza;

    for (int i = 0; i < grandezza/2 ; i++ ) {
        if(array[i] < array[i - 1]);
        Crescente = false;
    }

    if (Crescente) {
        cout << "L'array e ordianto in modo crescente " << endl;
    } else {
        cout << "L'array non e` ordinato in modo crescente" << endl;
    }

return 0;
}