#include <stdio.h>


#define SIZE 3


void initializeBoard(char board[SIZE][SIZE]) {

    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < SIZE; j++) {

            board[i][j] = ' ';

        }

    }

}


void printBoard(char board[SIZE][SIZE]) {

    printf("\n");

    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < SIZE; j++) {

            printf(" %c ", board[i][j]);

            if (j < SIZE - 1) printf("|");

        }

        printf("\n");

        if (i < SIZE - 1) {

            printf("---|---|---\n");

        }

    }

    printf("\n");

}


int checkWin(char board[SIZE][SIZE]) {


    for (int i = 0; i < SIZE; i++) {

        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') ||

            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')) {

            return 1;

        }

    }

    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||

        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {

        return 1;

    }

    return 0;

}


int checkDraw(char board[SIZE][SIZE]) {

    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < SIZE; j++) {

            if (board[i][j] == ' ') {

                return 0;

            }

        }

    }

    return 1;
}


int main() {

    char board[SIZE][SIZE];

    initializeBoard(board);

    int row, col, player = 0;

    char symbols[2] = {'X', 'O'};


    while (1) {

        printBoard(board);

        printf("Giocatore %d (%c), inserisci la tua mossa (riga e colonna): ", player + 1, symbols[player]);

        scanf("%d %d", &row, &col);

        

        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {

            printf("Mossa non valida! Riprova.\n");

            continue;

        }


        board[row][col] = symbols[player];



        if (checkWin(board)) {

            printBoard(board);

            printf("Giocatore %d (%c) ha vinto!\n", player + 1, symbols[player]);

            break;

        }



        if (checkDraw(board)) {

            printBoard(board);

            printf("È un pareggio!\n");

            break;

        }


        player = (player + 1) % 2;

    }


    return 0;

}