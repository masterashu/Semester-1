#include <stdio.h>
#include <conio.h>
void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main(){
    int a, b;
    a = 10;
    b = 25;
    swap(&a,&b);
    printf("a = %d.\nb = %d.", a, b);
    getch();
    return 0;
}