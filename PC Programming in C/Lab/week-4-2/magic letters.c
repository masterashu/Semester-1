#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, k = 0, max = 0;
    scanf("%d ", &n);
    char a[100000], c;
    for(int i = 0; i < n; i++){
        scanf("%s ", a);
        max = 0;
        for(int i = 0; i < strlen(a); i++){
            k = 0;
            for(int j = i; j < strlen(a); j++){
                if(a[i] == a[j])
                    k++;
            }
            if(k > max){
                max = k;
                c = a[i];
            }
        }
        printf("%c\n", c);
    }
    
    return 0;
}
