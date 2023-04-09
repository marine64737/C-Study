#include <stdio.h>
#include <math.h>

double factorial(int n){
	int a=1;
	if (n==0||n==1) return 1;
	else if (n<0) return 0;
	else return factorial(n-1)*n;
}
int main(){
	int num[200]={1, 0, };
	int sum=0;
	for (int i=2; i<=100; i++){
		for (int j=0; j<=log10(factorial(i));j++){
			num[j]*=i;
		}
		for (int j=0; j<=log10(factorial(i));j++)
			if (num[j]/10!=0){
				num[j+1]+=num[j]/10;
				num[j]-=(num[j]/10)*10;
			}
		for (int j=log10(factorial(i)); j>=0;j--)
			printf("%d", num[j]);
		printf("\n");
	}
	for (int j=0; j<200;j++)
		sum+=num[j];
	
	printf("\n");
	printf("%d\n", sum);
	return 0;
}
