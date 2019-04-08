#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d ", &t);
    while(t--){
        int n = 0, m = 0;
        char a[1002], b[1002];
        scanf("%s %s ", a, b);
        for(int i = 0; i < strlen(a); i++){
            n *= 2;
            n += a[i] - 48;
        }
        for(int i = 0; i < strlen(b); i++){
            m *= 2;
            m += b[i] - 48;
        }
        printf("%d\n", n + m);
    }
}