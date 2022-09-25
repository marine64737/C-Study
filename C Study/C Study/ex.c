#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}
int GetSpace(char str[])
{
	for (int i = 0; i < strlen(str); i++)
		if (str[i] == ' ') return 1;
	return 0;
}
int main(void) {
	char str1[20];
	char str2[20];
	int SP1 = 0;
	int SP2 = 0;

	while (1) {
		fgets(str1, sizeof(str1), stdin);
		fgets(str2, sizeof(str2), stdin);
		if (!GetSpace(str1) || !GetSpace(str2)) break;
		else printf("Please retry!");
	}

	RemoveBSN(str1);
	RemoveBSN(str2);

	for (int i = 0; i < strlen(str1); i++)
		if (str1[i] == ' ') SP1 = i;
	for (int i = 0; i < strlen(str2); i++)
		if (str2[i] == ' ') SP2 = i;
	if(SP1 != SP2)

	return 0;
}
