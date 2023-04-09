#include <stdio.h>
#include <math.h>
#include "Function.h"

int prime(int n){
	int a=0;
	for (int i=1; i<=sqrt(n);i++){
		if (n%i==0) a++;
	}
	if (a>1) return 0;
	else return 1;
}