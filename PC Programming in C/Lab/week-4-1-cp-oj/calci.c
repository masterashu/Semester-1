#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d ", &a, &b);
    scanf("%c", &c);
    switch(c){
        case '+': printf("%d", a+b);
            break;
        case '-': printf("%d", a-b);
            break;
        case '*': printf("%d", a*b);
            break;
        case '/': if(b == 0){
            printf("-2");
        }
            else{
                printf("%d", a/b);
            }
            break;
        default: printf("-1");
            
    }
    return 0;
}
