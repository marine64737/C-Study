#include <stdio.h>

int div(long long int n){
	long long int num;
	int time=0;
	num=n;
	while (num!=1){
		time++;
		if (num%2==0) num/=2;
		else num=3*num+1;
	}
	return time+1;
}
int div1(long long int n){
	long long int num1;
	long long int num2=0;
	int time=0;
	num1=n;
	while (num1!=1){
		time++;
		if (num1%2==0) num1/=2;
		else num1=3*num1+1;
		if (num2<num1) num2=num1;
	}
	return num2;
}
int main(){
	long long int num=1000000;
	long long int num2=0;
	int time=0;
	while (num>0){
		if (time<div(num)) {
			time = div(num);
			printf("%lld, %d\n", num, time);
		}
		if (num2<div1(num)) {
			num2=div1(num);
			printf("%lld, %lld\n", num, num2);
		}
		num--;
	}
	return 0;
}
