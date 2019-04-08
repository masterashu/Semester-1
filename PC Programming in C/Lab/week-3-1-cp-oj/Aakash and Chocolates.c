#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int a[n];
    int max = 0, min =1000001; 
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }
    int c[max - min + 1];
    for(int i = 0; i <= max - min; i++){
        c[i] = 1;
    }
    for(int i = 0; i < n; i++){
        c[a[i] - min] = 0;
    }
    int s = 0;
    for(int i = 0; i <= max - min; i++){
        s += c[i];
    }
    if(s == 0){
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
