#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

void SwipePoint(Point* x, Point* y)
{
	Point temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	printf("pos1: [%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("pos2: [%d, %d]\n", pos2.xpos, pos2.ypos);

	SwipePoint(&pos1, &pos2);
	printf("pos1: [%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("pos2: [%d, %d]\n", pos2.xpos, pos2.ypos);
	return 0;
}