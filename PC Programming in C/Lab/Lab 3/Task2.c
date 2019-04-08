/*
    Ashutosh Chauhan
    Roll no- S20180010017
*/
#include <stdio.h>
#include <conio.h>
int main(){
    int Chocalates;
    int Children;
    printf("Enter no of chocolates: ");
    scanf("%d", &Chocalates);
    printf("Enter no of students: ");
    scanf("%d",&Children);
    Chocalates -= Chocalates % Children;
    int result = Chocalates / Children;
    printf("The max n for which \"there is at least one girl child who gets at least \'n\' chocolates\" is: %d", result);
    getch();
    return 0;
}
