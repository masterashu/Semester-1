#include <stdio.h>
#include <conio.h>
int myFunction(int n);
void MyFunction(int n){
    long long i = 1;
    long long j = 2;
    long long k;
    printf("%ld,%ld,",i ,j);
    while(n--){
        k = i + j + 1;
        printf("%ld,", k);
        j = k;
        i = j;
    }
    printf("%ld.", i + j + 1);
}
int main(){
    int i;
    MyFunction(200);
    
    getch();
    return 0;
}

int myFunction(int n){
    if(n < 3)
        return n;
    return myFunction(n - 1) + myFunction(n - 2) + 1;
}

