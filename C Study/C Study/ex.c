#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}
int main(void) {
	char str[20] ;
	fgets(str, sizeof(str), stdin);

	return 0;
}