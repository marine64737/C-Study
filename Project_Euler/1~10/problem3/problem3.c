#include <stdio.h>
#include <math.h>

int prime_Factor(int n){
	int a=0;
	for (int i=1; i<=sqrt(n);i++){
		if (n%i==0) a++;
	}
	if (a>1) return 0;
	else return 1;
	
}

int main(){
	long long int x=600851475143;
	int div=2;
	while(div<sqrt(x)){
		if (x%div==0){
			if (prime_Factor(div)==1)
				printf("%d\n", div);
		}
		div++;
	}
	
	return 0;
}
