#include <bits/stdc++.h>

using namespace std;
int semiprime(int n){
    int x = sqrt(n);
    if(x*x == n){
        return 0;
    }
    int k = 0;
    printf("Number-%d-\n", n);
    for(int i = 2;k < 2 && i*i <= n; i++)
    {
        while(n % i == 0){
            n = n/i;
            ++k;         
        }
    }
    if(n > 1)
        ++k;
    
    printf("k = %d\n",k);
    return k == 2;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int q = 0;
        for(int i = 6; i <= n/2 + 2; i++){
            if(semiprime(i) == 1 && semiprime(n - i))
                q++;
        }
        if(q)
        printf("YES\n");
        else
        printf("NO\n");
    }

    return 0;
}
