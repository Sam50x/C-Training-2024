#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkWinner (int, int, int*, int*);

int main (void){
    srand(time(NULL));

    int myScore = 0, userScore = 0, myChoice, urChoice, playAgainChoice;
    printf("Let's play Rock, Paper, Scissors!!!");

    while (1){
        printf("\nEnter 1 for Rock\nEnter 2 for Paper\nEnter 3 for Scissors\nEnter here: ");
        scanf("%d", &urChoice);
        myChoice = rand() % 3 + 1;
        checkWinner(urChoice,myChoice, &userScore, &myScore);
        printf("\n\nDo u wanna play again ?");
        printf("\n1 for Yes and 2 for No: ");
        scanf("%d", &playAgainChoice);

        if (playAgainChoice == 1){
            continue;
        } else if (playAgainChoice == 2){
            break;
        } else{
            printf("\nNigga?!\n");
            break;
        }

    }
}


void checkWinner(int urChoice, int myChoice, int* userScore, int* myScore){

    switch(urChoice){

        case 1:
        if (myChoice == 1){
            printf("\nU did choose Rock, and I did choose Rock too!");
            printf("\nShall we call it a draw");
            break;
        }
        else if (myChoice == 2){
            printf("\nU did choose Rock, and I did choose Paper!");
            printf("\nI got u this time");
            (*myScore)++;
            break;
        } 
        else if (myChoice == 3){
            printf("\nU did choose Rock, and I did choose Scissors!");
            printf("\nOkay u got it");
            (*userScore)++;
            break;
        } 

        case 2:
         if (myChoice == 1){
            printf("\nU did choose Paper, and I did choose Rock!");
            printf("\nOkay u got it");
            (*userScore)++;
            break;
        }
        else if (myChoice == 2){
            printf("\nU did choose Paper, and I did choose Paper too!");
            printf("\nShall we call it a draw");
            break;
        } 
        else if (myChoice == 3){
            printf("\nU did choose Paper, and I did choose Scissors!");
            printf("\nI got u this time");
            (*myScore)++;
            break;
        }

        case 3:
         if (myChoice == 1){
            printf("\nU did choose Scissors, and I did choose Rock!");
            printf("\nI got u this time");
            (*myScore)++;
            break;
        }
        else if (myChoice == 2){
            printf("\nU did choose Scissors, and I did choose Paper!");
            printf("\nOkay u got it");
            (*userScore)++;
            break;
        } 
        else if (myChoice == 3){
            printf("\nU did choose Scissors, and I did choose Scissors too!");
            printf("\nShall we call it a draw");
            break;
        }
        default:
        printf("\nLooks like u did choose something wrong\nChoose between 1 and 3 next time");
        break;

    }

    printf("\n\nMy Score is %d, and Ur score is %d",*myScore, *userScore);

}