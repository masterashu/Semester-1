#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long k;
        for(int i = 0; i < n; i++) {
            cin >> k;
            a[i] = k - a[i];
        }
        for(int i = 0; i < n - 2; i++){
            if(a[i] == 0)
            continue;
	    if(a[i] > 0){
	    	int c = a[i];
	    	a[i] = 0;
	    	a[i+1] -= c + c;
	    	a[i+2] -= c+c+c;
	    }
            if(a[i] < 0){
                cout << "NIE\n";
                k = 1;
                break;
            }
	}
        long s = a[n - 2] + a[n - 1];
        if(s == 0 && k == 0)
        cout << "TAK\n";
        else
        cout << "NIE\n";

    }
    return 0;
}
