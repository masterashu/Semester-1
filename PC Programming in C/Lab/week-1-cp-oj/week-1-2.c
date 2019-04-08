#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int todecimal(int n){
    int sum = 0, i = 0;
    while(n){
        int k = n % 10;
        k *= pow(2,i++);
        sum += k;
        n /= 10;
    }
    return sum;
}

int main() {

    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", todecimal(n));
    }
    
    return 0;
}
