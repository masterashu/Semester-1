#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

void switchr(int a[], int m){
    for(int i = 0; i < m; i++){
        a[i] ^= 1;
    }
}
long long power(long long a, int b){
    long long s = 1;
    while(b--){
    s *= a;
    }
    return s;
}

int main() {
    int t;
    scanf("%d ", &t);
    while(t--){
        int n, m;
        scanf("%d %d ", &n, &m);
        int a[n][m];
        int count[m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d ", &a[i][j]);
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i][0] == 0){
                switchr(a[i], m);
            }
        }
        for(int j = 0; j < m; j++){
            count[j] = 0;
            for(int i = 0; i < n; i++){
                if(a[i][j] == 1){
                    count[j]++;
                }
            }
            if(count[j] < n - count[j]){
                count[j] = n - count[j];
            }
        }
        /*
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        for(int j = 0; j < m; j++){printf("%d ", count[j]);}
        printf("\n");
        */
        long long sum = 0;
        long long w = 1;
        for(int i = 0; i < m; i++){
            long long k = w * count[m - 1 - i];
            sum += k;
            w *= 2;
        }
        printf("%lld \n", sum);
    }
    return 0;
}
