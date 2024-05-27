#include <stdio.h>

//global variables
char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
const char player1Char = 'O';
const char player2Char = 'X';
char winner = ' ';

//functions prototypes
void printBoard();
char checkWinner();
void player1Move();
void player2Move();
char checkDraw();


//main
int main(void){
    
    int choice;

    printf("Let's play tic tac toe!!\n");
    while (1){
        printBoard();
        player1Move();
        if (checkWinner() != ' '){
            printBoard();
            printf("\nPlayer 1 wins!!\nFu** u player 2");
            break;
        } else if (checkDraw() != ' '){
            printBoard();
            printf("\nIt's a draw!!\nI think it's kinda player 2's fault");
            break;
        }

        printBoard();
        player2Move();
        if (checkWinner() != ' '){
            printBoard();
            printf("\nPlayer 2 wins!!\nI hate that winner for real");
            break;
        } else if (checkDraw() != ' '){
            printBoard();
            printf("\nIt's a draw!!\nI think it's kinda player 2's fault");
            break;
        }


    }

}


//to print da board
void printBoard(){
    printf(" %c | %c | %c \n",board[0][0],board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n",board[1][0],board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c ",board[2][0],board[2][1], board[2][2]);
}


// to check if there is a winner
char checkWinner(){
    for(int i = 0; i < 3; i++){
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' '){
            return 'W';
        } else if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' '){
            return 'W';
        } else if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' '){
            return 'W';
        } else if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' '){
            return 'W';
        }
    }
    return ' ';
}




//for player one move
void player1Move(){
    int i, j;
    printf("\nu r the one playing O's\n");
    printf("\nEnter da number of the row u wanna: ");
    scanf("%d", &i);
    i--;

    printf("\nEnter da number of the column u wanna: ");
    scanf("%d", &j);
    j--;
    if (board[i][j] == ' '){
        
        board[i][j] = 'O';
    } else {
        printf("\nCan't do that move ma friend!!\nI am sorry, if u did it again I will have to end the game\n");
        
        printBoard();
        printf("\nu r the one playing O's\n");
        printf("\nEnter da number of the row u wanna: ");
        scanf("%d", &i);
        i--;

        printf("\nEnter da number of the column u wanna: ");
        scanf("%d", &j);
        j--;

        board[i][j] = 'O';
    }
}


//for player two move
void player2Move(){
    int i, j;
    printf("\nu r the one playing X's\n");
    printf("\nEnter da number of the row u wanna: ");
    scanf("%d", &i);
    i--;

    printf("\nEnter da number of the column u wanna: ");
    scanf("%d", &j);
    j--;

    if (board[i][j] == ' '){
        
        board[i][j] = 'X';
    } else {
        printf("\nCan't do that, u nigga!!\nand if u did it again I will have to kill ur fu**ing ass\n");
        
        printBoard();
        printf("\nu r the one playing X's\n");
        printf("\nEnter da number of the row u wanna: ");
        scanf("%d", &i);
        i--;

        printf("\nEnter da number of the column u wanna: ");
        scanf("%d", &j);
        j--;

        board[i][j] = 'X';
    }
}


//to check draw
char checkDraw(){
    int freeSpaces = 9;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j] != ' '){
                freeSpaces--;
            }
        }
    }
    if (freeSpaces == 0){
        return 'D';
    } else {
        return ' ';
    }
    
}