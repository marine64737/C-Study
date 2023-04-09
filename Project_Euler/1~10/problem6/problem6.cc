#include <stdio.h>
#include <math.h>

int main(){
	int x=0;
	int y=0;
	int a;
	scanf("%d", &a);
	for (int i=1; i<=a; i++)
		x+=i*i;
	for (int i=1; i<=a; i++)
		y+=i;
	y=y*y;
	printf("%d-%d=%d\n", y, x, y-x);
	return 0;
}
