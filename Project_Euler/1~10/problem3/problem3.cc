#include <stdio.h>
#include <math.h>

int prime_Factor(double n){
	int a=0;
	for (int i=1; i<=sqrt(n);i++){
		a++;
	}
	if (a>1) return 0;
	else return 1;
	
}

int main(){
	double x=13195;
	double div=1;
	while(div<sqrt(x)){
		if (prime_Factor(div)==0)
			printf("%lf\n", div);
		div++;
	}
	
	return 0;
}
