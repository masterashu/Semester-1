/*
    Ashutosh Chauhan
    Roll no- S20180010017
*/
#include <stdio.h>
#include <conio.h>
int main(){
    int Amount;
    int Denominations[] = {100,50,20,10,1};
    int Notes[] = {0,0,0,0,0};
    printf("Enter The Cash Amount: ");
    scanf("%d", &Amount);
    int i = 0;
    while(i < 5){
        int noOfNotes;
        if(Amount > Notes[i]){
            noOfNotes = Amount / Denominations[i];
            Amount = Amount % Denominations[i];
            Notes[i] = noOfNotes;
        }
        i++;
    }
    for(i = 0; i < 5; i++){
        if(Notes[i]!= 0)
            printf("%d * %d, ", Notes[i], Denominations[i]);
    }
    printf("\b\b.");
    getch();
    return 0;
}
