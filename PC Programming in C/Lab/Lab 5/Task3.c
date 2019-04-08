#include <stdio.h>
#include <conio.h>

int series(int n){
    if(n == 0)
        return 1;
    return series(n - 1) * 3 + 2;
}

int main(){
    for(int i = 0; i < 10; i++){
        printf("%d\t", series(i));
    }
    getch();
    return 0;
}