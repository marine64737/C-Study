#include <stdio.h>
#include <math.h>

int Palindrome(char arr[], int len) {
	//대소문자 구분
	/*for (int i = 0; i < len / 2; i++) {
		if (arr[i] != arr[len - 1 - i]) return 0;
	}*/
	//대소문자 구분 x
	for (int i = 0; i < len / 2; i++)
		if (arr[i] != arr[len - 1 - i] && abs(arr[i] - arr[len - 1 - i]) != 32) return 0;
	return 1;
}
int main() {
	char arr[20];
	int i = 0, len = 0;
	scanf_s("%s", arr, sizeof(arr)/sizeof(char));
	while (arr[i]!=0)
	{
		len++;
		i++;
	}
	if (Palindrome(arr, len) == 1) printf("Palindrome");
	else printf("NOT Palindrome");

	return 0;
}