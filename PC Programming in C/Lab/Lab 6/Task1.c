#include <stdio.h>
#include <conio.h>
int main(){
    const int n = 10;
    int a[n];
    for(int i = 0; i < n; i++){
        printf("%d\t", &a[i]);
    }
    getch();
    return 0;
}