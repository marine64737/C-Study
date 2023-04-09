#include <stdio.h>
#include <math.h>

int main(){
	double num=pow(2,1000);
	int x=log10(num);
	int sum=0;
	int arr[500]={1,0,};
	for (int i=0; i<1000; i++){
		for (int j=0; j<500; j++)
			arr[j]*=2;
		for (int j=0; j<500; j++)
			if (arr[j]>9) {
				arr[j+1]++;
				arr[j]-=10;
			}
		for (int j=log10(pow(2,i+1)); j>=0; j--){
			printf("%d", arr[j]);
		}
		printf("\n");
	}
	for (int j=log10(pow(2,1000)); j>=0; j--){
		sum+=arr[j];
	}
	printf("%d\n", sum);
	/*
	for (int j=0; j<500; j++){
		printf("%d", arr[j]);
	}
	*/
	/*
	int div=0;
	int m=0;
	printf("num: %.0f\n",num);
	while (num>0) {
		m=num/pow(10,x);
		div+=m;
		num-=m*pow(10,x);
		printf("x: %d, div: %d, m: %.0f, num: %.0f\n",x, div, m*pow(10,x), num);
		x=log10(num);
	}
	*/
	//printf("div: %d\n",x);
	return 0;
}
