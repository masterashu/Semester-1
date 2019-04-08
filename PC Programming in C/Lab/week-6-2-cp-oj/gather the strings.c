#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char a[1002], b[1002];
    gets(a);
    gets(b);
    for(int i = 0; i < strlen(a); i++){
       a[i] = tolower(a[i]); 
    }
    for(int i = 0; i < strlen(b); i++){
       b[i] = tolower(b[i]); 
    }
  //  printf("%s\n%s\n", a, b);
    int maxcompare = 0;
    for(int j = 0; j < strlen(b); j++){
        int count = 0;
    for(int i = 0; i < strlen(a); i++){
            if(a[i] == b[j]){
                int l = i, m = j;
                while(a[l] == b[m] && l < strlen(a) && m < strlen(b)){
                    l++;
                    m++;
                    //printf("%d %d\n", l, m);
                    count++;
                }
            }
            if(count > maxcompare){
                maxcompare = count;
            }
            count = 0;
        }
        if(count > maxcompare){
            maxcompare = count;
        }
        count = 0;

    }
    printf("%d", maxcompare);
    return 0;
}
