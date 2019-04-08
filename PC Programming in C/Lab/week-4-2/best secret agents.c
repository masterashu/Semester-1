#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, max = -10000001, k;
    scanf("%d ", &n);
    for(int i = 0; i < n; i++){
        scanf("%d ", &k);
        if(k > max){
            max = k;
        }
    }
    printf("%d", max);
    return 0;
}
