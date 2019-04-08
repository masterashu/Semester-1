/*
    Ashutosh Chauhan
    Roll no - S20180010017
*/

#include <stdio.h>
#include <time.h>
#include <conio.h>
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
    int matches = 100;
    int dice1, dice2, p1 = 0, p2 = 0, d = 0;
    srand(time(0));
    while(matches--){
    dice1 = 1 + (rand() % 6);
    dice2 = 1 + (rand() % 6);
    switch(roll(dice1, dice2)){
        case 1: p1++;
        break;
        case 2: p2++;
        break;
        case 0: d++;
    }
    }
    printf("Player 1 wins %d times. Player 2 wins %d times. Drawn %d times", p1, p2, d);

    getch();
    return 0;
}