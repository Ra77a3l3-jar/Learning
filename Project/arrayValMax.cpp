#include <iostream>
#include <limits.h>

using namespace std;

int main(){

    int numeri[] = {5, 9, 12, 6, 3, 1, 8, 4, 7, 2};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int max = INT_MIN;

    for(int i = 0; i < lunghezza; i++){
        if(numeri[i] > max) max = numeri[i];
    }
    cout << "Il numero max e: " << max << endl;
return 0;
}