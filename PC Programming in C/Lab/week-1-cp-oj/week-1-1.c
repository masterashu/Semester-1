#include <stdio.h>

int checkarm(int n){
    int k = n;
    int sum = 0;
    while(k>0){
        int t = k % 10;
        sum += t * t * t;
        k = k / 10;
    }
    if(n == sum)
        return 1;
    else
        return 0;
}

int main(){
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    for(int i = a; i <= b; i++){
        if(checkarm(i) == 1)
        printf("%d ", i);
    }
    
    return 0;
}