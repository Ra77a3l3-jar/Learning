#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void playerChoice(char &player) {
  cout << "What do you chose (rock - paper - scissors) : " << endl;
  cin >> player;
}

char computerChoice() {
  srand(time(NULL));
  int random = rand() % 3 + 1;

  switch (random) {
  case 1:
    return 'r';
  case 2:
    return 'p';
  default:
    return 's';
  }
}

int main() {

  char player;
  char computer;
  char timesPlay;

  do {
    playerChoice(player);
    computer = computerChoice();

    if (player == 'r' && computer == 's') {
      cout << "Player wins" << endl;
    } else if (player == 'r' && computer == 'p') {
      cout << "Computer wins" << endl;
    } else if (player == 's' && computer == 'r') {
      cout << "computer wins" << endl;
    } else if (player == 's' && computer == 'p') {
      cout << "player wins" << endl;
    } else if (player == 'p' && computer == 'r') {
      cout << "player wins" << endl;
    } else if (player == 'p' && computer == 's') {
      cout << "computer wins" << endl;
    } else if (player == 'r' && computer == 'r') {
      cout << "Tie" << endl;
      cout << "If you want a rematch write (y) : " << endl;
      cin >> timesPlay;

      while (timesPlay != 'y' && timesPlay != 'Y') {
        cout << "Invalid input. Please enter (y) for a rematch." << endl;
        cin >> timesPlay;
      }
    } else if (player == 's' && computer == 's') {
      cout << "Tie" << endl;
      cout << "If you want a rematch write (y) : " << endl;
      cin >> timesPlay;

      while (timesPlay != 'y' && timesPlay != 'Y') {
        cout << "Invalid input. Please enter (y) for a rematch." << endl;
        cin >> timesPlay;
      }
    } else if (player == 'p' && computer == 'p') {
      cout << "Tie" << endl;
      cout << "If you want a rematch write (y) : " << endl;
      cin >> timesPlay;

      while (timesPlay != 'y' && timesPlay != 'Y') {
        cout << "Invalid input. Please enter (y) for a rematch." << endl;
        cin >> timesPlay;
      }
    }
  } while (timesPlay == 'y' || timesPlay == 'Y');

  return 0;
}
