#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int Quadratic (int num) {
    int quadrato = num * num;
    return quadrato;
}

int main(){

    int numero;

    srand(time(NULL));
    numero = rand ()% 21 + 1;

    int quadrato  = Quadratic(numero);

    cout << "Il quadrato del numero " << numero << " e : " << quadrato << endl;

return 0;
}