#include <iostream>
#include <string>

using namespace std;

bool Vocale(char a) {
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        return true;
    } else {
        return false;
    }
}

int main() {

    char lettera = 'A';

    if (Vocale(lettera)){
        cout << "La lettera " << lettera << " e` una vocale " << endl;
    } else {
        cout << "La lettera " << lettera << " non e` una vocale " << endl; 
    }
return 0;
}