#include <stdio.h>
#include <conio.h>
void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main(){
    int n;
    printf("Number of values = ");
    scanf("%d", &n);
    int a[n];
    printf("Values : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n/2; i++){
        swap(&a[i], &a[n - i - 1]);
    }
    printf("Values : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    getch();
    return 0;
}