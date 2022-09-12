#include <stdio.h>

void CCWRotate(int arr[][4], int col)
{
	int arr1[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr1[j][3 - i] = arr[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = arr1[i][j];
		}
	}
}
void ACWRotate(int arr[][4], int col)
{
	int arr1[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr1[3 - j][i] = arr[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = arr1[i][j];
		}
	}
}
int main(void)
{
	int num[4][4] =
	{ 
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16} 
	};
	int len = sizeof(num) / sizeof(num[0]);
	while (1) {
		int x;
		scanf_s("%d", &x);
		switch (x) {
		case 1:
			CCWRotate(num, len);
			break;
		case 2:
			ACWRotate(num, len);
			break;
		}
		printf("----------------------------------\n");
		for (int i = 0; i < 4; i++) {
			printf("[");
			for (int j = 0; j < 3; j++) {
				printf("%d\t", num[i][j]);
			}
			printf("%d]\n", num[i][3]);
		}
		printf("----------------------------------\n");
	}
	
}