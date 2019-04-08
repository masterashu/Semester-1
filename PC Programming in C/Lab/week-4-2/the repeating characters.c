#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int compare(char a, char b){
    if(a == b)
        return 1;
    if((a - b) == 32)
        return 1;
    if((b - a) == 32)
        return 1;
    return 0;
}

void mystrcpy(char a[], char b[]){
    int len = 0;
    for(int i = 0; i < strlen(a); i++){
        if(a[i] != '1'){
            b[len] = a[i];
            len++;
        }
    }
    b[len] = '\0';
}

int main() {
    int t, length;
    scanf("%d ", &t);
    char a[10000], b[10000];
    for(int i = 0; i < t; i++){
        scanf("%s ", a);
        int count = 1;
        while(count > 0){
            count = 0;
            for(int i = 0; i < strlen(a) - 1; i++){
                if(compare(a[i], a[i + 1]) == 1)
                {
                    a[i] = '1';
                    a[i + 1] = '1';
                    i++;
                }
            }
            mystrcpy(a, b);
            strcpy(a, b);
            for(int i = 0; i < strlen(a) - 1; i++){
                if(compare(a[i], a[i + 1]) == 1)
                    count++;
            }
        }
        for(int i = 0; i < strlen(a); i++){
            printf("%c", tolower(a[i]));
        }
        printf("\n");
    }
    return 0;
}
