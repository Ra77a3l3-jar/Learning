#include <iostream>
#include <string>

using namespace std;

int main(){

    string nomi[] = {"Marco", "Luca", "Alessandro", "Giulio", "Andrea"};
    int lunghezza = sizeof(nomi) / sizeof(nomi[0]);
    string nomeTrovare = "Luca";
    int posizione = -1;

    for(int i = 0; i < lunghezza; i++){
        if(nomi[i] == nomeTrovare) posizione = i;
    }
    cout << "La posizione del nome " << nomeTrovare << " e' " << posizione << endl;
return 0;
}