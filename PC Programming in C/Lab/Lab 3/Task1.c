/*
    Ashutosh Chauhan
    Roll no- S20180010017
*/
#include <stdio.h>
#include <conio.h>
int main(){
    int Chocalates = 72;
    int Children = 8;
    Chocalates -= Chocalates % Children;
    int result = Chocalates / Children;
    printf("The max n for which \"there is at least one girl child who gets at least \'n\' chocolates\" is: %d", result);
    getch();
    return 0;
}