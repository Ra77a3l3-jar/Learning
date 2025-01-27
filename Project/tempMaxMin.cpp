#include <iostream>

using namespace std;

int main(){

int temp = 0;
int tempMax = 0;
int tempMin = 0;

int sommaTemp = 0;
float mediaTemp = 0;

int contatore = 0;

    cout << "Inserisci la temperature Massima: ";
    cin >> tempMax;

    cout << "Inserisci la temperature Minima: ";
    cin >> tempMin;

    while(true){

        cout << "Inserisci la tremperatura: ";
        cin >> temp;

        if(temp > 100){
            break;
        }
        
        contatore++;

        if(temp >= tempMax){
            cout << "La temperatura e superiore alla temperatura massima" << endl;
        } else if(temp <= tempMin){
            cout << "La temperatura e inferiore alla temperatutra minima" << endl;
        }

        sommaTemp += temp;

    }

    mediaTemp = sommaTemp / contatore;

    cout << "La media delle temperature e: " << mediaTemp << endl;

}