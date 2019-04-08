#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int* fun(int n, int *a){
    //int arr[100];
    int* arr = (int*)malloc(sizeof(int)*200);
    int sum = 0;
    for(int i = 0; i < n; i++){
        arr[i] = a[i];
    }
    return arr;
}

int main(int argc, const char *argv[]){
    
    int a[] = {2, 1,4,3, 5};
    int b[] = {1, 23 ,32};

    printf("%.3f", a);
    cout << setprecision(3) << a;

    return 0;
}