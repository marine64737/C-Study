#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((int)time(NULL));
	int a, b;
	int w = 0, s = 0;
	
	while (1) {
		printf("바위: 1, 가위: 2, 보: 3/선택: ");
		scanf_s("%d", &a);
		b = rand() % 3;
		switch (a) {
		case 1:
			switch (b) {
			case 0:
				printf("나: 바위, 상대: 바위, 비김\n");
				s++;
				break;
			case 1:
				printf("나: 바위, 상대: 가위, 이김\n");
				w++;
				break;
			case 2:
				printf("나: 바위, 상대: 보, 짐\n");
				printf("%d승, %d무", w, s);
				return 0;
			}
			break;
		case 2:
			switch (b) {
			case 0:
				printf("나: 가위, 상대: 바위, 짐\n");
				printf("%d승, %d무", w, s);
				return 0;
			case 1:
				printf("나: 가위, 상대: 가위, 비김\n");
				s++;
				break;
			case 2:
				printf("나: 가위, 상대: 보, 이김\n");
				w++;
				break;
			}
			break;
		case 3:
			switch (b) {
			case 0:
				printf("나: 보, 상대: 바위, 이김\n");
				w++;
				break;
			case 1:
				printf("나: 보, 상대: 가위, 짐\n");
				printf("%d승, %d무", w, s);
				return 0;
			case 2:
				printf("나: 보, 상대: 보, 비김\n");
				s++;
				break;
			}
			break;
		}
	}
	return 0;
}