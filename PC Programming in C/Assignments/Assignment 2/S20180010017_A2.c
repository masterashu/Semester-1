/*
          Assignment - 2
          ASHUTOSH CHAUHAN
          UG - 1 CSE
Roll no-  S2018 001 0017
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int strcicmp(char a[], char b[]){
    for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
        if(tolower(a[i]) < tolower(b[i]))
            return -1;
        else
        if(tolower(a[i]) > tolower(b[i]))
            return 1;
    }
    return 0;
}

// Function to convert a string to sum of ASCII charcters

int stringToCode(char a[]){
    int count = 0;
    int n = strlen(a);
    for(int i = 0; i < n; i++){
        count += (int)a[i];
        count += (int)a[i];
    }
    return count;
}

// function to find the lucky number from a string

int luckyNumber(char a[]){
    int n = stringToCode(a);
    while(n > 9){
        n = n / 10 + n % 10;
    }
    return n;
}

int main(){
    char A[50][20];
    int index = 0, i = 0, j = 0, k, l = __INT_MAX__;
    char Name[20];
    char ch, p[50];
    char Full[400];
    printf("Please enter your name: ");
    scanf("%[A-Za-z ]", Name);
    int Match = luckyNumber(Name);
    printf("%s, your lucky number is %d.\n", Name, Match);
    printf("\nPlease enter the cities you want to match:");
    fflush(stdin);
    scanf("%[^\n]", Full);
    char Temp[20];
    while(Full[i] != '.'){
        ch = Full[i];
        if(ch == ','){
            Temp[index] = '\0';
            strcpy(A[j], Temp);
            index = 0;
            j++;
        }
        else{
            Temp[index++] = ch;
        }
        if(Full[i + 1] == '.'){
            Temp[index] = '\0';
            strcpy(A[j], Temp);
            j++;
        }
        i++;
    }
    fflush(stdin);
    printf("\nThe Lucky numbers are:\n");
    for(int z = 0; z < j; z++){
        int LuckyNumber = luckyNumber(A[z]);
        printf("%s = %d\n", A[z], LuckyNumber);
        k = abs(LuckyNumber - Match);
        if(k < l){
            l = k;
            i = z;
            strcpy(p, A[z]);
        }
        if(k <= l){
            if(stricmp(p, A[z]) > 0){
                i = z;
                strcpy(p, A[z]);
            }
        }
    }
    printf("\nYou will do well if you join %s.", A[i]);
    getch();
    return 0;
}