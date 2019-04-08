#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n < 0){
        printf("-1");
        return 0;
    }
    int k = n;
    int s = 0;
    while(k > 0){
        s = s* 10;
        int x = k % 10;
        s = s + x;
        k = k / 10;
    }
    if(n==s){
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
