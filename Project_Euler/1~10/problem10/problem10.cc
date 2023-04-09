#include <stdio.h>
#include <math.h>

int prime(int n){
	if (n<2) return 0;
	else if (n==2 || n==3) return 1;
	for (int i=2; i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int main(){
	long long int sum=0;
	int x=0;
	while (x<=2000000){
		if (prime(x)==1) {
			//printf("%d\n", x);
			sum+=x;
		}
		x++;
	}
	printf("%lld\n", sum);
	
	return 0;
}
