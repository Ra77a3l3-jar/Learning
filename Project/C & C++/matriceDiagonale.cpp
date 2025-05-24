#include <iostream>

using  namespace std;

int main() {

    int array [5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                array [i][j] = 1;
            } else {
                array [i][j] = 0;
            }
        }
    }

    cout << "Stampo la matrice : " << endl;

    for  (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array [i][j] << " ";
        }
        cout << endl;
    }
return 0;
}