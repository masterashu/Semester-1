#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;

ll power (ll a, int b){
    ll s = 1;
    while(b--){
        s = s * a;
    }
    return s;
}
    
int main() {
    ll a, b;
    int n, c1=0,c2=0;
    scanf("%lld %lld %d\n", &a, &b, &n);
    char c;
    while(n--){
        scanf("%c", &c);
        switch(c){
            case '1' : c1++;
                break;
            case '0' : c2++;
        }
    }
    a = power(a, c1);
    b = power(b, c2);
    printf("%lld %lld\n", a, b);
    if(a > b)
        printf("Rishav");
    else
        printf("Disha");
    return 0;
}
