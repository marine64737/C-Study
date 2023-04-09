#include <stdio.h>
#include <math.h>

int div(int n){
	int a=0;
	int num=0;
	for (int i=1; i<sqrt(n);i++)
		if (n%i==0) a++;
	if(fmod(sqrt(n),1.0)==0) { printf("%d %f\n", n, sqrt(n)); num=1;}
	if(num==0) return a*2;
	else return a*2+1;
}

int main(){
	int num=1;
	int tri=0;
	int a;
	scanf("%d", &a);
	while (num>0){
		tri=0;
		for (int i=1;i<=num;i++)
			tri+=i;
		if (div(tri) >=a){
			printf("%d %d %d\n", num, tri, div(tri));
			break;
		}
		num++;
	}
	return 0;
}
