#include <iostream>
#include <string>
#include <map>

using namespace std;

int Decode (string numRomano, int* numero) {

    map<char, int> m;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

    for (int i = 0; i < numRomano.size(); i++) {
        int valore = m[numRomano[i]];
        *numero += valore;
    }
return *numero;
}

int main() {

string numRomano;
int numDecoded;

cout << "Inserisci un numero Romano (MAIUSCOLO) : " << endl;
cin >> numRomano;

numDecoded = Decode(numRomano, &numDecoded);

cout << "Il valore del numero romano " << numRomano << " e di " << numDecoded << endl;

return 0;
}