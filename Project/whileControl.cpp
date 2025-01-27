#include <iostream>
using namespace std;

int main() {
    int positivi = 0;
    int negativi = 0;
    int nulli = 0;
    int num, precedente;
    bool tuttiPari = true;
    bool crescente = true;
    bool decrescente = true;

    cout << "Inserisci una sequenza di numeri interi: " << endl;
    cin >> num;
    precedente = num;

    if (num % 2 != 0) {
        tuttiPari = false;
    }
    if (num > 0) {
        positivi++;
    } else if(num < 0){
        negativi++;
    } else{
        nulli++;
    }

    while (true) {
        
        if(nulli == 3 || negativi == 5){
            break;
        }

        cin >> num;

        if(num > 0){
            positivi++;
        }else if(num < 0){
            negativi++;
        }else{
            nulli++;
        }
        
        if(num % 2 != 0){
            tuttiPari = false;
        }
        
        if(num > precedente){
            decrescente = false;
        }else if(num < precedente){
            crescente = false;
        }

        precedente = num;
    }

    cout << "Numeri positivi: " << positivi << endl;
    cout << "Numeri negativi: " << negativi << endl;
    cout << "Numeri nulli: " << nulli << endl;
    cout << "Tutti i numeri sono pari: " << (tuttiPari ? "Si" : "No") << endl;
    if(crescente && !decrescente){
        cout << "La sequenza è crescente" << endl;
    }else if(!crescente && decrescente){
        cout << "La sequenza è decrescente" << endl;
    }else{
        cout << "La sequenza non è né crescente né decrescente" << endl;
    }

    return 0;
}