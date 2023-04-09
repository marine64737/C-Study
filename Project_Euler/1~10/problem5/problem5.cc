#include <stdio.h>
#include <math.h>

int prime(int n){
	int a=0;
	for (int i=1; i<=sqrt(n);i++){
		if (n%i==0) a++;
	}
	if (a>1) return 0;
	else return 1;
}
int prime_num(int n){
	int a=0;
	for (long int i=2; i<=sqrt(n);i++){
		if (n%i==0&&a<=i&&prime(i)==1) a=i;
	}
	return a;
}
int LCM(int n){
	int i=1;
	if (n==1) return 1;
	else if (prime(n)==1) return LCM(n-1)*n;
	else{
		i=LCM(n-1);
		while (i>0){
			if (i%n==0&&i%LCM(n-1)==0) break;
			return LCM(n-1)*prime_num(n);
		}
	}
	return i;
}

int main(){
	long long int x;
	printf("입력: ");
	scanf("%d", &x);
	for (int i=1; i<=x; i++)
		printf("%d번째: %ld\n", i, LCM(i));
	
	return 0;
}
