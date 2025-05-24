#include <iostream>
#include <iomanip>

using namespace std;

void showBalance ( double balance) {
    cout << "The balance in your account amounts at $ " << setprecision(2) << fixed << balance << endl;
}

void deposit ( double& balance) {
    double amount = 0;

    cout << "How much would you like to deposit? : " << endl;
    cin >> amount;

    if (amount > 0) {
        balance += amount;
    } else {
        cout << "The amount you wanted to deposit is invalid" << endl;
    }
}

void withdraw ( double& balance) {
    double amount = 0;

    cout << "How much money would you like to withdraw? : " << endl;
    cin >> amount;

    if (amount > 0) {
        balance -= amount;
    } else {
        cout << "The amount you wanted to withdraw is invalid" << endl;
    }
}

int main() {

    double balance = 0;
    int choice = 0;

    do {
        cout << "Enter your choice: " << endl;
        cout << "1. ShowBaolance " << endl;
        cout << "2. Deposit " << endl;
        cout << "3. Withdraw " << endl;
        cout << "4. Exit " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                deposit(balance);
                break;
            case 3:
                withdraw(balance);
                break;
            case 4:
                cout << "Exiting...." << endl;
                break;
            default:
            cout << "Invalid choice!" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
