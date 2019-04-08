#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b;
    scanf("%d %d ", &a, &b);
    char n1[33] = "00000000000000000000000000000000";
    char n2[33] = "00000000000000000000000000000000";
    int i = 1, index = 0;
    while(index < 33){
        if(a&i){
            n1[index] = '1';
        }
        index++;
        i *= 2;
    }
    i = 1; index = 0;
    
    while(index < 33){
        if(b&i){
            n2[index] = '1';
        }
        index++;
        i *= 2;
    }
    int count = 0;
    for(int k = 0; k < 33; k++){
        if(n1[k] != n2[k])
            count++;
    }
  //  printf("%s\n%s\n", n1, n2);
    printf("%d ", count);
    return 0;
}
