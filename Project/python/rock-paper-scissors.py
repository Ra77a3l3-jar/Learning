from ast import PyCF_ALLOW_TOP_LEVEL_AWAIT
import random

def Choices():
    print("Rock - Paper - Scissors Game!")
    print("Enter: (r)ock - (p)aper - (s)cissors")

def getPlayerChoice():
    choice = input("\nEnter your choice: ")
    return choice

def getComputerChoice():
    choice = {1: 'Rock', 2: 'Paper', 3: 'Scissors'}
    return random.choice(list(choice.values()))

def displayChoices(player, computer):
    if player == 'r':
        print ("\nPlayer chose : Rock")
    elif player == 'p':
        print("\nPlayer chose : Paper")
    else :
        print("\nPlayer chose : Scissors")

    if computer == 'r':
        print("\nComputer chose : Rock")
    elif computer == 'p':
        print("\nComputer chose : Paper")
    else :
        print("\nComputer chose : Scissors")

def match (player, computer):
    if player == computer:
        return 0

    if player == 'r' and computer == 's' or player == 's' and computer == 'p' or player == 'p' and computer == 'r' :
        return 1
    
    return -1

def playAgain ():
    choice = print("\nDo you want to play again? (y/n) : ")

    return choice

def main():
    Choices()
    
    while True:
        player = getPlayerChoice()
        computer = getComputerChoice()

        displayChoices(player, computer)

        result = match(player, computer)

        if result == 0:
            print("\nThe match is a tie")
        elif result == 1:
            print("\nThe player won the match")
        else :
            print("\nThe computer won the match")
        
        play = playAgain()

        if play != 'y' or play != 'Y':
            print("\nThanks for playing")
            break

if __name__ == "__main__":
    main()
