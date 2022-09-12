#include <stdio.h>

void Sort(int arr[], int len, int num) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1; j++) {
			int temp = arr[j];
			switch (num) {
			case 0:
				if (arr[j] < arr[j + 1]) {
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
				break;
			case 1:
				if (arr[j] > arr[j + 1]) {
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
}
int main() {
	int arr[7];
	for (int i = 0; i < 7; i++) {
		scanf_s("%d", &arr[i]);
	}
	Sort(arr, 7, 0);
	for (int i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}
	Sort(arr, 7, 1);
	for (int i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}