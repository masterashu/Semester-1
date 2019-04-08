#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d ", &n);
    int Num = n * n;
    int a[n][n];
    int m = n;
    int c = 1;
    int row, col;
    int k;
    if(n % 2 == 0){
        k = 0;
        row = -1;
        col = 0;
    }
    else
    {
        k = 2;
        col = n - 1;
        row = n;
    }
    while(Num){
        if(c % 2 == 0){
            c = 1;
            m--;
        }
        else
            c--;
        int i = 0;
        switch(k % 4){
            case 0: while(i++ < m){a[++row][col] = Num--; }
                break;
            case 1: while(i++ < m){a[row][++col] = Num--; }
                break;
            case 2: while(i++ < m){a[--row][col] = Num--; }
                break;
            case 3: while(i++ < m){a[row][--col] = Num--; }
                break;
        }
        k++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
