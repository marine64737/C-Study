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
	int age1 = 0;
	int age2 = 0;

	while (1) {
		fgets(str1, sizeof(str1), stdin);
		RemoveBSN(str1);
		if (GetSpace(str1)) break;
		else printf("Please retry!");
	}
	while (1) {
		fgets(str2, sizeof(str2), stdin);
		RemoveBSN(str2);
		if (GetSpace(str2)) break;
		else printf("Please retry!");
	}

	for (int i = 0; i < strlen(str1); i++)
		if (str1[i] == ' ') SP1 = i;
	for (int i = 0; i < strlen(str2); i++)
		if (str2[i] == ' ') SP2 = i;
	if (SP1 != SP2) printf("Different Name!");
	else
	{
		if (!strncmp(str1, str2, SP1)) printf("Same Name!");
		else printf("Different Name!");
	}
	fputc('\n', stdout);
	age1 = atoi(&str1[SP1 + 1]);
	age2 = atoi(&str2[SP2 + 1]);
	if (age1 == age2) printf("Same Age!");
	else printf("Different Age!");

	return 0;
}
