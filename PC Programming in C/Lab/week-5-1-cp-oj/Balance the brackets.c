#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d ", &n);
    while(n--){
        char a[1003];
        char b[1003] = "\0";
        scanf("%s ", a);
        b[0] = a[0];
        char lastopen = b[0];
        switch(lastopen){
            case '}':
            case ']':
            case ')':
                printf("NO\n");
                continue;
        }
        int open = 1;
        lastopen = b[strlen(b) - 1];
        int q = 1;
        for(int i = 1; i < strlen(a); i++){
            lastopen = b[strlen(b) - 1];
         /*   printf("%s\n", b); */
            switch(a[i]){
                case ')':
                    if(lastopen == '('){
                        open--;
                        b[strlen(b) - 1] = '\0';
                    }
                    else{
                        q = 0;
                        break;
                    }
                    break;
                case '}':
                    if(lastopen == '{'){
                        open--;
                        b[strlen(b) - 1] = '\0';
                    }
                    else{
                        q = 0;
                        break;
                    }
                    break;
                case ']':
                    if(lastopen == '['){
                        open--;
                        b[strlen(b) - 1] = '\0';
                    }
                    else{
                        q = 0;
                    }
                    break;
                case '(': b[strlen(b)] = '(';
                    open++;
                    break;
                case '{': b[strlen(b)] = '{';
                    open++;
                    break;
                case '[': b[strlen(b)] = '[';
                    open++;
                    break;
            }
        }
        if(open != 0 || q == 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}
