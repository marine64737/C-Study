#include <stdio.h>
#include <math.h>

int prime(int n){
	int a=0;
	if (n<2) return 0;
	for (int i=1; i<=sqrt(n);i++){
		if (n%i==0) a++;
	}
	if (a>1) return 0;
	else return 1;
}

int main(){
	int x=0;
	int i=0;
	int a;
	printf("입력: ");
	scanf("%d", &a);
	while (1){
		x++;
		if (prime(x)==1) 
			i++;
		if (i==a) break;
	}
	printf("%d번째: %d\n", i, x);
	return 0;
}
