#include <stdio.h>

int main(void) {
	int arr[20][20] = { 0, };
	int x = 0, i = 0, j = -1, a = 0;
	scanf_s("%d", &x);
	for (int p = 0; p < x; p++) {
		arr[i][++j] = ++a;
	}
	for (int p = x-1; p > 0; p-=2) {
		for (int q = 0; q < p; q++) {
			arr[++i][j] = ++a;
		}
		for (int q = 0; q < p; q++) {
			arr[i][--j] = ++a;
		}
		for (int q = 0; q < p-1; q++) {
			arr[--i][j] = ++a;
		}
		for (int q = 0; q < p - 1; q++) {
			arr[i][++j] = ++a;
		}
	}
	for (int p = 0; p < x; p++) {
		for (int q = 0; q < x; q++) {
			printf("%d\t", arr[p][q]);
		}
		printf("\n");
	}

	return 0;
}