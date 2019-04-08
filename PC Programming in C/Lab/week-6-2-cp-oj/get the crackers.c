#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d ", &n);
    int a[n], b[n];
    long maxcount = 0;
    for(int i = 0; i < n; i++){
        scanf("%d ", &a[i]);
    }
    b[0] = a[0];
    for(int i = 1; i < n; i++){
        b[i] = b[i - 1] + a[i];
    }   
    for(int i = 0; i < n; i++){
        if(b[i] > maxcount)
            maxcount = b[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(b[j] - b[i] > maxcount)
                maxcount = b[j] - b[i];
        }
    }
    if(maxcount < 0){
        maxcount = 0;
    }
    printf("%ld", maxcount);
    return 0;
}
