/*
        ASHUTOSH CHAUHAN
        S20180010017
*/

#include <stdio.h>
int main(){
    // declaring a size for bigger and smaller VV
    int big = 5, small = 3;
    // remove below statements to manually input size of big and small V
    // printf("Enter big and small size of V:\n");
     scanf("%d %d", &big, &small);
    for(int i = 1; i <= big; i++){
        // initial spaces before first diagonal;
        for(int j = 1; j < i; j++){
            printf(" ");
        }
        // print the *
        printf("*");

        int k = (big - i) * 2;
        while(k-- > 0){
            printf(" ");
        }

        printf(" *");
        // for smaller v
        if(i > big - small){
            k = (i - (big - small) - 1) * 2;
            while(k-- > 0){
                printf(" ");
            }
            printf("*");
            k = (big - i) * 2;
            while(k-- > 0){
                printf(" ");
            }
            printf(" *");
        }
        printf("\n");
    }
    int qw;
    scanf("%d", &qw);
    return 0;
}
