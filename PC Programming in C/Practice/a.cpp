#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int N, k;
        cin >> N;
        int A[N + 1];
        A[0] = 0;
        for(int i = 1; i <= N; i++){
            cin >> k;
            A[i] = A[i - 1] + k; 
            printf("%d--", A[i]);
        }
          for(int i = 1; i <= N; i++){
            A[i] = A[i - 1] + k; 
            printf("%d--", A[i]);
        }
        long Sum = A[0]; 
        int temp = A[0];
        int day = 0;
        do{
            int i = 0;
            int count = temp;
            temp = 0; 
///         printf("%ld!", Sum);
            while(i < count){
                temp+= A[++i];
            }
            Sum += temp;
            day++;
        }while(Sum < N); 
        printf("%d\n", day);
    }

    return 0;
}