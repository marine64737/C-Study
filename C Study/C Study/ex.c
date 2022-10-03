#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

typedef struct
{
	Point p1;
	Point p2;
} Rectangle;

void ShowArea(Rectangle * r)
{
	printf("Area: %d\n", (r->p2.xpos - r->p1.xpos) * (r->p2.ypos - r->p1.ypos));
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