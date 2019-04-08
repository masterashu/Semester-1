/*
    Ashutosh Chauhan
    Roll no- S20180010017
*/
//#include <conio.h>
#include <stdio.h>
#include <stdarg.h>

// function to find Maximum of 'n' numbers
int max(int n, ...){
    int max = -32768;
    va_list Number;
    va_start(Number, n);
    for(int i = 0; i < n; i++){
        int k = va_arg(Number, int);
        if(k > max)
            max = k;
    }
    va_end(Number);
return max;
}

// function to find Minimum of 'n' numbers
int min(int n, ...){
    int min = 32767;
    va_list Number;
    va_start(Number, n);
    for(int i = 0; i < n; i++){
        int k = va_arg(Number, int);
        if(k < min)
            min = k;
    }
    va_end(Number);
return min;
}

// function to find average of 'n' numbers
float avg(int n, ...){
    float total = 0;
    va_list Number;
    va_start(Number, n);
    for(int i = 0; i < n; i++){
        int k = va_arg(Number, int);
        total = total + k;
    }
    va_end(Number);
    return (total / n);
}

int main(){
    printf(" Min is %d.\n", min(3, 2, 9, 11));
    printf(" Max is %d.\n", max(3, 2, 9, 11));
    printf(" Avg is %.0f.\n", avg(3, 2, 9, 11));
 //   getch();
    return 0;
}