#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int N, k;
        cin >> N;
        vector<int> A;   
        int Total = 0;
        for(int i = 0; i < N; i++){
            cin >> k;            
            Total += k;
            A.push_back(Total); 
            cout << A[i] << "--";
        }

        int i = 0, day = 1;
        while(A[i] < N && i < N){
            cout << i << "!" << day << "i";
            i = A[A[i]];
            day++;
        }
        cout << day << endl;
    }

    return 0;
}