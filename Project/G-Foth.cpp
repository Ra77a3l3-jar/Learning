#include <iostream>
#include <string>

using namespace std;

int main() {
    int numeri[100];
    int i = 0; // Stack pointer

    while (true) {
        string input;
        cin >> input;

        if (input == "+") {
            numeri[i - 2] = numeri[i - 2] + numeri[i - 1];
            i--;
        } else if (input == "-") {
            numeri[i - 2] = numeri[i - 2] - numeri[i - 1];
            i--;
        } else if (input == "*") {
            numeri[i - 2] = numeri[i - 2] * numeri[i - 1];
            i--;
        } else if (input == "/") {
            numeri[i - 2] = numeri[i - 2] / numeri[i - 1];
            i--;
        } else if (input == ".") {
            cout << numeri[i - 1] << endl;
            i--;
        } else {
            numeri[i++] = stoi(input);
        }
        cout << "ok" << endl;
    }

    return 0;
}