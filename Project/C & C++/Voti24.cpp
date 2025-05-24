#include <iostream>
#include <string>

using namespace std;

int main() {
    int mediaSuff = 0;
    int mediaInsuff = 0;
    int classi15 = 0;
    int numClass = 0;

    bool classe1F = false;
    bool classe5C = false;
    bool classe5A = false;

    while (true) {
        string classe;

        cout << "Inserisci la sezione (o 'fine' per terminare): ";
        cin >> classe;

        if (classe == "1F") classe1F = true;
        if (classe == "5A") classe5A = true;
        if (classe == "5C") classe5C = true;

        if (classe == "fine") break;
        if (classe5A && classe5C) break;

        numClass++;

        int studenti;
        int somma = 0;
        int voto;
        int votiValidi = 0;

        cout << "Inserisci il numero di studenti nella classe: ";
        cin >> studenti;

        if (studenti >= 15) classi15++;

        for (int i = 0; i < studenti; i++) {
            cout << "Inserisci il voto dello studente: ";
            cin >> voto;

            if (voto >= 1 && voto <= 10) {
                somma += voto;
                votiValidi++;
            } else {
                cout << "Voto non valido, deve essere tra 1 e 10." << endl;
            }
        }

        if (votiValidi > 0) {
            int media = somma / votiValidi;
            cout << "La media della classe è: " << media << endl;

            if (media >= 6) mediaSuff++;
            else mediaInsuff++;
        } else {
            cout << "Nessun voto valido inserito per questa classe." << endl;
        }
    }

    cout << endl;

    if (mediaSuff >= 1 && mediaInsuff >= 1) 
        cout << "Ci sono classi con media sufficiente e insufficiente" << endl;
    if (mediaInsuff == 0) 
        cout << "Nessuna classe ha media insufficiente" << endl;
    if (classi15 == numClass) 
        cout << "Tutte le classi hanno almeno 15 studenti" << endl;
    if (classe1F == true) 
        cout << "La classe 1F è presente" << endl;
    else 
        cout << "La classe 1F non è presente" << endl;

    return 0;
}