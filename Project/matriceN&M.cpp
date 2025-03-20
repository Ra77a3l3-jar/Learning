#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    srand (time(NULL));

    int matrice [5][5];
    int N = rand()  % 41;
    int M = rand()  % 41;
    int max;
    int min;

    bool tutteLeCelle = true;

    if (N > M) {
        N = max;
        M = min; 
    } else {
        M = max;
        N = min;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrice[i][j] = rand()  % 41;
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((matrice[i][j] <= max) && (matrice[i][j] >= min)) {
                tutteLeCelle = true;
            }
        }
    }

    if (tutteLeCelle) {
        cout << "Tutti i valori nella matrice sono compresi tra N e M " << endl;
    } else {
        cout  << "Non tutti i valori nella matrice sono compresi tra N e M " << endl;
    }
return 0;
}