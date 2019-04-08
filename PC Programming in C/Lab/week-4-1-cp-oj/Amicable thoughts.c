#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long sumofdiv(int n){
    long sum = 1;
    int i;
    for(i = 2; i <= n/i; i++){
        if(n % i == 0){
            sum += i;
            sum += n/i;
        }
    }
    i--;
    if(i * i == n){
        sum -= i;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d ", &n);
    long k, q;
    int count = 0;
    for(int i = 220; i < n; i++){
        k = sumofdiv(i);
        if(k > n){continue;}
        if(k <= i){continue;}
        q = sumofdiv(k);
        if(q == i){
            count++;
   //         printf("!%d-%ld-%ld-%d!", i, k, q, count);
            i = k;
        }
    }
    count *= count;
    printf("%d ",count);
    return 0;
}
