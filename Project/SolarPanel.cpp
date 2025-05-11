#include <iostream>
#include <vector>
#include <sciplot/sciplot.hpp>

using namespace sciplot;
using namespace std;

void risorse (int* pannelli, float* wattaggio, float* capacitaBatt, int* intervalloT, float* tempoSimul) {
    
    cout << "Inserisci il numero di pannelli nel impianto: " << endl;
    cin >> *pannelli;

    cout << "Inserisci il wattaggio del singolo pannello: " << endl;
    cin >> *wattaggio;

    cout << "Inserisci la capacita della batteria (kwH): " << endl;
    cin >> *capacitaBatt;
    *capacitaBatt = *capacitaBatt * 1000;   // Converto da KwH a Wh

    cout << "Inserisci l'intervallo di tempo che verra usato: " << endl;
    cin >> *intervalloT;

    cout << "Inserisci la durata della simulazione: " << endl;
    cin >> *tempoSimul;

}

void caricamento (int pannelli, float wattaggio, float capacitaBatt, int intervalloT, float tempoSimul, vector<float> &tempi, vector<float> &livelli) {
    
    float caricaBatt = 0.0;
    float quantitaRicarica = 0.0;

    for (int i = 0; i < tempoSimul; i += intervalloT) {
        quantitaRicarica = pannelli * wattaggio * (intervalloT/3600.0);   // calcolo i watt/h di tutti i pannelli
        cout << "La quantitaRicarica e`: " << quantitaRicarica << endl;

        caricaBatt += quantitaRicarica;

        if (caricaBatt >= capacitaBatt) {
            caricaBatt = capacitaBatt;
            cout << "La batteria e piena al secondo: " << i << endl;
        }

        tempi.push_back(i);
        livelli.push_back(caricaBatt);

        cout << "Al secondo " << i << " : la carica della batteria e`: " << caricaBatt << endl;
    }
}

int main() {

    int pannelli;       // numero di pannelli
    float wattaggio;    // quanti watt produce in un secondo
    float capacitaBatt; // qunata energia puo contenere la batteria
    int intervalloT;    // Intervallo in secondi
    float tempoSimul;   // Durata totale in secondi

    vector<float> tempi;
    vector<float> livelli;

    risorse (&pannelli, &wattaggio, &capacitaBatt, &intervalloT, &tempoSimul);

    caricamento (pannelli, wattaggio, capacitaBatt, intervalloT, tempoSimul, livelli, tempi);

    Plot2D plot;

    // Creo l'asse x e y 
    plot.xlabel("Tempo (secondi)");
    plot.ylabel("Carica batteria (Wh)");

    plot.legend()
        .atOutsideBottom()
        .displayHorizontal()
        .displayExpandWidthBy(2);

    // Disegno la curva tra le due variabili
    plot.drawCurve(tempi, livelli);

    plot.drawCurve(tempi, livelli).label("Livello batteria");

    // Creo la figura sul Plot
    Figure fig = {{plot}};
    Canvas canvas = {{fig}};

    canvas.show();

    return 0;
}
