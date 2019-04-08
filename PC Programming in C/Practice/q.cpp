#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> s;
        s.resize(n);
        int count = 0;
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        sort(s.begin(), s.end(), greater<int>());
        int q = s[k - 1];
        for(int i = 0; i < n; i++){
            if(s[i] >= q)
                count++;
        }
        cout << count << "\n";

    }
    return 0;
}
