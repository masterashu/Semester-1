#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = n; i > 0; ){
		sum = sum + i%10;
		i = i / 10;
	}
	printf("%d\n",sum);
}
