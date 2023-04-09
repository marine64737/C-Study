#include <stdio.h>

int palindrome(int n){
	int length=0;
	int num[10]={0,};
	while(n>0){
		num[length]=n%10;
		length++;
		n/=10;
	}
	for (int i=0; i<length; i++){
		if (num[i]!=num[length-1-i])
			return 0;
	}
	return 1;
}

int main(){
	int a=10000;
	for (int x=100; x<1000; x++){
			for (int y=x; y<1000; y++){
				if (palindrome(x*y)==1){
						if (a<x*y){
							a=x*y;
							printf("%d*%d=%d\n", x, y, a);
						}
				}
			}
	}
	
	return 0;
}
