#include <stdio.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
};

struct people
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct point pos = { 10,20 };

	return 0;
}