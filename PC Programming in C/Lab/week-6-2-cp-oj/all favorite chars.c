#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isvowel(char a){
    switch(a){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'o':
        case 'i':
        case 'u':
            return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d ", &n);
    while(n--){
        char a[10002];
        gets(a);
        int count = 0;
        for(int i = 0; i < strlen(a); i++){
            if(isvowel(a[i]))
                count++;
        }
        printf("%d\n", count);
    }
    
    return 0;
}
