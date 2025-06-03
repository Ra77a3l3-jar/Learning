#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void Choices() {
    cout << "Rock - Paper - Scissors Game!" << endl;
    cout << "Enter: (r)ock, (p)aper or (s)cissors" << endl;
}

char getPlayerChoice() {
    char choice;
    while (true) {
        cout << "Enter your choice : " << endl;
        cin >> choice;
        if (choice >= 'A' && choice <= 'Z') {
            choice = choice + 32;
        }
        if (choice == 'r' || choice == 'p' || choice == 's') {
            return choice;
        }
        cout << "Invalid choice, Please enter a valid choice (r - s - p)" << endl;
    }
}

char getComputerChoice() {
    int random = rand() % 3;
    switch (random) {
        case 0:
            return 'r';
        case 1:
            return 's';
        default:
            return 'p';
    }
}

void displayChoices(char player, char computer) {
    cout << "You chose: ";
    switch (player) {
        case 'r':
            cout << "Rock";
            break;
        case 's':
            cout << "Scissors";
            break;
        case 'p':
            cout << "Paper";
            break;
    }
    cout << endl;
    
    cout << "Computer chose: ";
    switch (computer) {
        case 'r':
            cout << "Rock";
            break;
        case 's':
            cout << "Scissors";
            break;
        case 'p':
            cout << "Paper";
            break;
    }
    cout << endl;
}

int determineWinner(char player, char computer) {
    if (player == computer) {
        return 0;
    }
    if ((player == 'r' && computer == 's') ||
        (player == 's' && computer == 'p') ||
        (player == 'p' && computer == 'r')) {
        return 1;
    }
    return -1;
}

bool playAgain() {
    char choice;
    cout << "Do you want to play again (y/n) : " << endl;
    cin >> choice;
    if (choice >= 'A' && choice <= 'Z') {
        choice = choice + 32;
    }
    return (choice == 'y');
}

int main() {
    srand(time(NULL));
    do {
        Choices();
        char player = getPlayerChoice();
        char computer = getComputerChoice();
        displayChoices(player, computer);
        
        int result = determineWinner(player, computer);
        if (result == 0) {
            cout << "It's a tie!" << endl << endl;
        } else if (result == 1) {
            cout << "You win!" << endl << endl;
        } else {
            cout << "Computer wins!" << endl << endl;
        }
    } while (playAgain());
    
    cout << "Thanks for playing!" << endl;
    return 0;
}
