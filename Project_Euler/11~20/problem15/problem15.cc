#include <stdio.h>

double factorial(int n){
	if (n==1||n==0) return 1;
	else if (n<0) return 0;
	else return factorial(n-1) * n;
}
int main(){
	printf("%.0f\n", factorial(40)/factorial(20)/factorial(20));
	return 0;
}
