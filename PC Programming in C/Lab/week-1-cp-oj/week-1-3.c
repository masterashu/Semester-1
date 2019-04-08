#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(int a[], int n){
    int i, j;
    for(j = 0; j < n - 1; j++){
        for(i = 0; i < n - 1; i++){
            if(a[i] > a[i+1]){
                a[i] = a[i] + a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] = a[i] - a[i+1];
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        sort(a, n);
        for(int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
    printf("\n");
    }
    return 0;
}
