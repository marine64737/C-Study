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

void ShowPosition(Rectangle * r)
{
	printf("[%d, %d], [%d, %d], [%d, %d], [%d, %d]\n", 
		r->p1.xpos, r->p1.ypos, r->p2.xpos, r->p1.ypos,
		r->p1.xpos, r->p2.ypos, r->p2.xpos, r->p2.ypos);
} 

int main(void)
{
	Rectangle r = { 2,4,5,7 };
	ShowArea(&r);
	ShowPosition(&r);
	return 0;
}