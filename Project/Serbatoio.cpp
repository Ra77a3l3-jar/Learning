#include <iostream>
#include <cmath>
#include <vector> 
#include <sciplot/sciplot.hpp>

using namespace sciplot;
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

void PortataOut (float altezza, float* livello, float areaS, float areaV, int interval, int tempSimu, float* acquaOut, vector<float> &tempi, vector<float> &livelli) {

    for (int i = 0; i < tempSimu; i += interval) {
        float portata = areaV * sqrt(2 * 9.81 * (*livello));
        float rilascio = portata * interval;
	float variazioneLivello = rilascio / areaS;
	if (*livello > variazioneLivello) {
        	*livello = *livello - variazioneLivello;
	} else {
		*livello = 0.0;
	}
        *acquaOut += rilascio;
        cout << "Il livello del serbatoio nel secondo " << i << " e di: " << *livello << endl;
        tempi.push_back(i);
        livelli.push_back(*livello);
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

    // Create a vector with values from 0 to pi divived into 200 uniform intervals for the x-axis
    vector<float> tempi;
    vector<float> livelli;

    RichiestaDati (&altezzaS, &livelloLiquid, &areaS, &areaV, &intervalloTemp, &tempoSimulazione);
    
    PortataOut (altezzaS, &livelloLiquid, areaS, areaV, intervalloTemp, tempoSimulazione, &acquaOut, tempi, livelli);

    cout << "Quantità di acqua uscita: " << acquaOut << " m³" << endl;
    cout << "Livello finale del serbatoio: " << livelloLiquid << " m" << endl;
    
    // Create a Plot object
    Plot2D plot;

    // Set the x and y labels
    plot.xlabel("tempo");
    plot.ylabel("livello");

    // Set the legend to be on the bottom along the horizontal
    plot.legend()
        .atOutsideBottom()
        .displayHorizontal()
        .displayExpandWidthBy(2);

    // Plot sin(i*x) from i = 1 to i = 6
    plot.drawCurve(tempi, livelli);

    // Create figure to hold plot
    Figure fig = {{plot}};
    // Create canvas to hold figure
    Canvas canvas = {{fig}};

    // Show the plot in a pop-up window
    canvas.show();

    return 0;
}
