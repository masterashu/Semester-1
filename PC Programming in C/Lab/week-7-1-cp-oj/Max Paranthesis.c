#include <stdio.h>

int Max(int a, int b){
    if(a > b)   return a;
    else    return b;
}

int main(){
    int t;
    scanf("%d ", &t);
    while(t--){
        int n;
        scanf("%d ", &n);
        char a[n+1];
        scanf("%s ", a);
        int stack[n];
        stack[0] = -1;
        int top = 0, max = -1;
        for(int i = 0; i < n; i++){
            if(a[i] == '('){
                stack[++top] = i;
            }
            if(a[i] == ')'){
                if(top > 0){
                    top--;
                    max = Max(max, i - stack[top]);
                }
                else{
                    stack[top] = i;
                }
            }
        }
        printf("%d\n", max);
    }
}