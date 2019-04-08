#include <conio.h>
#include <stdio.h>
int Factorial(int n){
    printf("%d * ", n);
    if(n <= 1)
        return 1;
    return Factorial(n - 1) * n;
}
int factorial(int n){
    int k = 1;
    while(n){
        printf("%d * ", n);
        k *= n--;
    }
    return k;
}
int main(){
    int number = 5;
    printf("%d! = ", number);
    int k = Factorial(number);
    printf("\b\b= %d", k);
    getch();
    return 0;
}