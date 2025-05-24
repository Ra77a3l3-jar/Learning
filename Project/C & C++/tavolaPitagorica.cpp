#include <iostream>

using namespace std;

int main() {

    int tavola [10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
            tavola[i][j] = (i + 1) * (j + 1);
        }
    }

    cout << " Tavola Pitagorica " << endl;

    for (int i = 0; i < 10; i++){
        for (int  j = 0; j < 10; j++){
            cout << tavola [i][j] << " ";
        }
        cout << endl;
    }
return 0;
}