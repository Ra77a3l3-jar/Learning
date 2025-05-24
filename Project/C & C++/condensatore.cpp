#include <iostream>
#include <vector>
#include <sciplot/sciplot.hpp>

using namespace std;
using namespace sciplot;

void richiestaDati (float* vGener, float* capacita, float* resistenza, float* intervalloT, int* tempoSimul, float* resitenzaCondensatore) {
    cout << "Inserisci la tensione del generatore [5V]: " << endl;
    if (cin.peek() == '\n') 
    {
        *vGener = 5;
    }
    else {
        cin >> *vGener;
    }

    cout << "Inserisci la capacita del condensatore: " << endl;
    cin >> *capacita;

    cout << "Inserisci la resistenza della R: " << endl;
    cin >> *resistenza;

    cout << "Inserisci la resistenza del condensatore in serie al condensatore: " << endl;
    cin >> *resitenzaCondensatore;

    cout << "Inserisci l'intervallo di tempo della Simulazione: " << endl;
    cin >> *intervalloT;

    cout << "Inserisci la durata della Simulazione: " << endl;
    cin >> *tempoSimul;

    cout << "PARAMETRI DI SIMULAZIONE" << endl;
    cout << "========================" << endl;
    cout << "Tensione generatore [Volt]: " << *vGener << endl;
    cout << "Capacita` condensatore [Farad]: " << *capacita << endl;
    cout << "Resistenza resistore [Ohm]: " << *resistenza << endl;
    cout << "Resistenza condensatore [Ohm]: " << *resitenzaCondensatore << endl;
    cout << "Intervallo di simulazione [Secondi]: " << *intervalloT << endl;
    cout << "Tempo di simulazione [Secondi]: " << *tempoSimul << endl;
}

void caricamento (float vGener, float capacita, float resistenza, float intervalloT, int tempoSimul, vector <float> &tempi, vector <float> &carica, float resitenzaCondensatore) {
    
    float dQ = 0.0;         // delta Quantita di Carica
    float q = 0.0;          // Quantita di Carica
    float nQ = 0.0;         // nuova Quantita di Carica
    float intens = 0.0;     // Intensita di Corrente nel circuito
    float vConden = 0.0;    // Tensione del Condensatore

    for (float i = 0; i < tempoSimul; i += intervalloT) {
        if (vConden == 0.0) {
            vConden = vGener;
            intens = vConden / resistenza;
            q = vConden * capacita;
            dQ = intens * intervalloT;

            cout << "Il condensatore e` stato caricato" << endl;
        } else {
            nQ = q - dQ;
            q = nQ;
            vConden = nQ / capacita;
            intens = vConden / resistenza;
            dQ = intens * intervalloT;

            cout << "Al secondo " << i << " della simulazione il condensatore ha una tensione di " << vConden << endl;
        }

        tempi.push_back(i);
        carica.push_back(vConden);
    }
}

int main() {

    float vGener;
    float capacita;
    float resistenza;
    float intervalloT;
    int tempoSimul;
    float resitenzaCondensatore;

    vector <float> tempi;
    vector <float> carica;

    richiestaDati (&vGener, &capacita, &resistenza, &intervalloT, &tempoSimul);
    caricamento (vGener, capacita, resistenza, intervalloT, tempoSimul, tempi, carica);

    // Create a Plot object
    Plot2D plot;

    // Set the x and y labels
    plot.xlabel("tempo");
    plot.ylabel("carica");

    // Set the legend to be on the bottom along the horizontal
    plot.legend()
        .atOutsideBottom()
        .displayHorizontal()
        .displayExpandWidthBy(2);

    // Plot sin(i*x) from i = 1 to i = 6
    plot.drawCurve(tempi, carica);

    // Create figure to hold plot
    Figure fig = {{plot}};
    // Create canvas to hold figure
    Canvas canvas = {{fig}};

    // Show the plot in a pop-up window
    canvas.show();

    return 0;
}
