#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d ", &n);
    int count[n][26];
    for(int i =  0; i < n; i++){
        for(int j = 0; j < 26; j++){
            count[i][j] = 0;
        }
    }
    int q = 0;
    int m = n;
    while(m--){
        char a[100003];
        scanf("%s ", a);
        for(int i = 0; i < strlen(a); i++){
            count[q][a[i] -'a']++;
        }
        q++;
    }

    int max = 0, temp = 0;
    for(int i = 0; i < n; i++){
        temp = 1;
        for(int j = i + 1; j < n; j++){
            int z =1;
            for(int k = 0; k < 26; k++){
                if(count[i][k] != count[j][k])
                {
                    z = 0;
                    break;
                }
            }
            if(z == 1){
                temp++;
            }
        }
        if(temp > max){
            max = temp;
        }
    }
    printf("%d", max);
    return 0;
}
