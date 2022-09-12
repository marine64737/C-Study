#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}
int main(void) {
	char str1[20] ;
	char str2[20] ;
	int SP1 = 0;
	int SP2 = 0;

	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	RemoveBSN(str1);
	RemoveBSN(str2);

	for (int i = 0; i < strlen(str1); i++)
		if (str1[i] == ' ') SP1 = i;
	for (int i = 0; i < strlen(str2); i++)
		if (str2[i] == ' ') SP2 = i;

	return 0;
}
