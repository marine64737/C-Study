#include <stdio.h>
#include <math.h>

int prime_num(int n){
	int a=0;
	if (n==1) return 0;
	else if (n==2||n==3) return 1;
	else if (n==4) return 3;
	else {
		for (int i=2; i<sqrt(n); i++)
			if (n%i==0) {
				a+=i;
				a+=n/i;
			}
		if (fmod(sqrt(n),1)==0) a+=sqrt(n);
	}
		
	return a+1;
}
int main(){
	int sum=0;
	for (int x=2; x<=10000; x++){
		for (int y=x+1; y<=10000; y++){
			if (prime_num(x)==y && prime_num(y)==x){
				printf("%d: %d, %d: %d\n", x, prime_num(x), y, prime_num(y));
				sum+=x+y;
			}
		}
	}
	printf("%d\n", sum);
		
	return 0;
}
