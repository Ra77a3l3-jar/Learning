#include <iostream>

using namespace std;

int main(){

    int num1 = 0;
    int num2 = 0;

    int i;

    cout << "Inserisci due numeri: ";
    cin >> num1 >> num2;
    cout << endl;

    int max = (num1 > num2) ? num1 : num2;
    int min = (num1 < num2) ? num1 : num2;

    for(i = min; i < max; i++){
        cout << i << endl;
    }
    cout << endl;

    for(i = max; i > min; i--){
        cout << i << endl;
    }
    cout << endl;

return 0;

}