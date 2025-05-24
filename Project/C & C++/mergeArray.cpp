#include <iostream>

using namespace std;

int main() {

    int array1 [4];
    int array2 [4];
    int merge [8];

    for (int i = 0; i < 4; i++) {
        cout << "Inserisci i numeri in ordine crescente (array 1): " <<  endl;
        cin  >> array1[i];
    }
    
    for (int i = 0; i < 4; i++) {
        cout << "Inserisci i numeri in ordine crescente (array 2): " <<  endl;
        cin  >> array2[i];
    }

    int k = 0;
    int i = 0;
    int j = 0;

    for (k = 0; k < 8; k++) {
        if ((i < 4) && (j < 4)) {
            if(array1[i] < array2[j]) {
                merge[k] = array1[i];
                i++;
            } else {
                merge[k] = array2[j];
                j++;
            }
        } else if (i <  4) {
            cout << "Caso di i minore del massimo i: " << i << endl;
            merge[k] = array1[i];
            i++;
        } else if (j < 4) {
            cout << "Caso di j minore del massimo j: " << j << endl;
            merge[k] = array2[j];
            j++;
        }
    }
    
    cout << "Array dopo il merge:" << endl;
    for(int i = 0; i < 8; i++) { 
        cout << merge[i] << endl;
    }
    cout << endl;

return 0;
}