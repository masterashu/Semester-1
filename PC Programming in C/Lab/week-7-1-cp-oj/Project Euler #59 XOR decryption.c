#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,a,b,c;
scanf("%d ", &n);
int key[n];
for(int i = 0; i < n; i++){
scanf("%d ", &key[i]);
} 
    int k;
for(a = 97; a <= 122; a++){
k = 1;
for(int i = 0; i < n; i+=3){
int d = a ^ key[i];
if(!((d >= 97 && d <= 122) || (d >= 65 && d <= 90) || (d >= 48 && d <= 57) || d == 40 || d == 41 || d == 58 || d == 59 || d == 44 || d == 46 || d == 39 || d == 63 || d == 45 || d == 33 || d == 32))
    {
        k = 0;
    }
}
    if(k == 1){
break;
}
}
    for( b = 97; b <= 122; b++){
k = 1;
for(int i = 1; i < n; i+=3){
int d = b ^ key[i];
if(!((d >= 97 && d <= 122) || (d >= 65 && d <= 90) || (d >= 48 && d <= 57) || d == 40 || d == 41 || d == 58 || d == 59 || d == 44 || d == 46 || d == 39 || d == 63 || d == 45 || d == 33 || d == 32))
    {
        k = 0;
    }
}
    if(k == 1){
break;
}
}
    
for( c = 97; c <= 122; c++){
k = 1;
for(int i = 2; i < n; i+=3){
int d = c ^ key[i];
if(!((d >= 97 && d <= 122) || (d >= 65 && d <= 90) || (d >= 48 && d <= 57) || d == 40 || d == 41 || d == 58 || d == 59 || d == 44 || d == 46 || d == 39 || d == 63 || d == 45 || d == 33 || d == 32))
    {
        k = 0;
    }
}
if(k == 1){
break;
}

}
printf("%c%c%c", a, b, c);
return 0;
}
