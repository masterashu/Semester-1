#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d ", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d ", &b[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int s = 0;
            for(int k = 0; k < n; k++){
                s+= a[i][k]*b[k][j];
            }
            c[i][j] = s;
        }
    }
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }  
    return 0;
}
