#include <stdio.h>

int main(){
	for (int i=1; i< 999;i++){
		for (int j=i; j<999-i; j++){
			int k=1000-i-j;
			if (i*i+j*j==k*k) printf("i: %d, j: %d, k: %d\n%d\n", i, j, k, i*j*k);
		}
	}
	return 0;
}
