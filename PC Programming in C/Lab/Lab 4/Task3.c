/*
    Ashutosh Chauhan
    Roll no - S20180010017
*/
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int roll(int p1, int p2){
    if(p1 > p2)
    return 1;
    else
    if(p2 > p1)
    return 2;
    else
    return 0;    
}

int main(){
    int dice1, dice2;
    srand(time(0));
    dice1 = 1 + (rand() % 6);
    printf("The first player rolls %d.\n", dice1);
    dice2 = 1 + (rand() % 6);
    printf("The second player rolls %d.\n", dice2);
    switch(roll(dice1, dice2)){
        case 1: printf("Player 1 wins!");
        break;
        case 2: printf("Player 2 wins!");
        break;
        case 0: printf("It's a Draw!");
    }
    getch();
    return 0;

}