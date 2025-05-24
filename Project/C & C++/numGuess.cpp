#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int mioNum = 0;
    int numero = rand() % 100 + 1;

    int tries = 0;
    int maxTries = 10;

    while (true)
    {
        cout << "Inserisci un numero tra 1 e 100: ";
        cin >> mioNum;
        tries++;

        if (mioNum == numero) {
            cout << "Hai vinto! Il numero era " << numero << endl;
            break;
        }
        else if (tries == maxTries) {
            cout << "Hai esaurito i tentativi! Il numero era " << numero << endl;
            break;
        }
        

    }

    return 0;
}