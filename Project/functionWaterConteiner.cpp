#include <iostream>
#include <cmath>

using namespace std;

void RichiestaDati (float* altezza, float* livello, float* areaS, float* areaV, int* interval, int* tempoSimu) {
    cout << "Inserisci l'atltezza del serbatoio: " << endl;
    cin >> *altezza;

    cout << "Inserisci il livello del serbatoio: " << endl;
    cin >> *livello;

    cout << "Inserisci l'area del serbatoio: " << endl;
    cin >> *areaS;

    cout << "Inserisci l'area della valvola: " << endl;
    cin >> *areaV;

    cout << "Inserisci l'intervallo di tempo (in secondi): " << endl;
    cin >> *interval;

    cout << "Inserisci la durata della simulazione: " << endl;
    cin >> *tempoSimu;
}

void PortataOut (float altezza, float* livello, float areaS, float areaV, int interval, int tempSimu, float* acquaOut) {

    for (int i = 0; i < tempSimu; i += interval) {
        float portata = areaV * sqrt(2 * 9.81 * (*livello));
        float rilascio = portata * interval;
        *livello = *livello - (rilascio / areaS);
        *acquaOut += rilascio;
        cout << "Il livello del serbatoio nel secondo " << i << " e di: " << *livello << endl;
    }
}

int main() {

    float altezzaS;
    float livelloLiquid;
    float areaS;
    float areaV;
    int intervalloTemp;
    int tempoSimulazione;
    float acquaOut = 0;

    RichiestaDati (&altezzaS, &livelloLiquid, &areaS, &areaV, &intervalloTemp, &tempoSimulazione);
    
    PortataOut (altezzaS, &livelloLiquid, areaS, areaV, intervalloTemp, tempoSimulazione, &acquaOut);

    cout << "Quantità di acqua uscita: " << acquaOut << " m³" << endl;
    cout << "Livello finale del serbatoio: " << livelloLiquid << " m" << endl;
    
    return 0;
}