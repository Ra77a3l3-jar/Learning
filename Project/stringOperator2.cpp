#include <iostream>
#include <string>

using namespace std;

#define MAX_ELEMENTS (5)

int main() {
    string stringhe[MAX_ELEMENTS];
    int i = 0;

    while (true) {
        if (i >= MAX_ELEMENTS) {
            cout << "Non posso inserire altre stringhe" << endl;
            break;
        }

        cout << "inserisci stringa " << i << " : ";
        cin >> stringhe[i];

        int result;

        if (stringhe[i] == "stop") {
            break;
        }
        cout << "current i is: " << i << endl;
        if (stringhe[i] == "pop") {
            if (i >= 1) {
                i -= 1;
                cout << "String in position: " << i << " has value: " << stringhe[i] << endl;
            } else {
                cout << "Non c'e nulla da togliere" << endl;
            }
        } else if (stringhe[i] == "+") {
            result = stoi(stringhe[i-1]) + stoi(stringhe[i-2]);
            if (i >= 2) {
                i = i - 2;
            }
            stringhe[i] = to_string(result);
            cout << " Result is :  " << result << endl;
            i++;
        } else if (stringhe[i] == "-") {
            result = stoi(stringhe[i-1]) - stoi(stringhe[i-2]);
            if (i >= 2) {
                i = i - 2;
            }
            stringhe[i] = to_string(result);
            cout << " Result is :  " << result << endl;
            i++;
        } else if (stringhe[i] == "*") {
            result = stoi(stringhe[i-1]) * stoi(stringhe[i-2]);
            if (i >= 2) {
                i = i - 2;
            }
            stringhe[i] = to_string(result);
            cout << " Result is :  " << result << endl;
            i++;
        } else if (stringhe[i] == "/") {
            if (i >= 2) {
                i = i - 2;
            }
            result = stoi(stringhe[i-1]) / stoi(stringhe[i-2]);
            stringhe[i] = to_string(result);
            cout << " Result is :  " << result << endl;
            i++;
        } else {
            i++;
        }
    }
    return 0;
}