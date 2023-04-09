#include <stdio.h>

int fibonacci(int n){
	if (n==0) return 1;
	else if (n==1) return 2;
	else return fibonacci(n-2)+fibonacci(n-1);
}

int main(){
	int x=0;
	int sum=0;
	while (fibonacci(x)<=4000000){
		if (fibonacci(x)%2==0)
			sum += fibonacci(x);
		x++;
	}
	printf("%d\n", sum);
	return 0;
}
