#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((int)time(NULL));
	int a, b, c;
	int x, y, z;
	
	x = rand() % 10;
	y = rand() % 10;
	while (x == y) {
		y = rand() % 10;
	}
	z = rand() % 10;
	while (x == z || y == z) {
		z = rand() % 10;
	}
	int inning = 0;
	while (1) {
		int strike = 0, ball = 0;
		printf("0~9 숫자 3개 선택: ");
		scanf_s("%d %d %d", &a, &b, &c);
		if (a == x) strike++;
		else if (a == y) ball++;
		else if (a == z) ball++;
		if (b == x) ball++;
		else if (b == y) strike++;
		else if (b == z) ball++;
		if (c == x) ball++;
		else if (c == y) ball++;
		else if (c == z) strike++;
		inning++;
		printf("%d번째 도전 결과: %dstrike, %dball!\n", inning, strike, ball);
		if (strike == 3) break;
	}
	return 0;
}