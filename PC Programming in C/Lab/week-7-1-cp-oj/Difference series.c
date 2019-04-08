#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int a = 3;
    int k = 7;
    for(int i = 1; i < n; i++){
        a += k;
        k += 4;  
    }
    printf("%d", a);
    return 0;
}
