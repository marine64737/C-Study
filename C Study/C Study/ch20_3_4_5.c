#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((int)time(NULL));
	int a, b;
	int w = 0, s = 0;
	
	while (1) {
		printf("����: 1, ����: 2, ��: 3/����: ");
		scanf_s("%d", &a);
		b = rand() % 3;
		switch (a) {
		case 1:
			switch (b) {
			case 0:
				printf("��: ����, ���: ����, ���\n");
				s++;
				break;
			case 1:
				printf("��: ����, ���: ����, �̱�\n");
				w++;
				break;
			case 2:
				printf("��: ����, ���: ��, ��\n");
				printf("%d��, %d��", w, s);
				return 0;
			}
			break;
		case 2:
			switch (b) {
			case 0:
				printf("��: ����, ���: ����, ��\n");
				printf("%d��, %d��", w, s);
				return 0;
			case 1:
				printf("��: ����, ���: ����, ���\n");
				s++;
				break;
			case 2:
				printf("��: ����, ���: ��, �̱�\n");
				w++;
				break;
			}
			break;
		case 3:
			switch (b) {
			case 0:
				printf("��: ��, ���: ����, �̱�\n");
				w++;
				break;
			case 1:
				printf("��: ��, ���: ����, ��\n");
				printf("%d��, %d��", w, s);
				return 0;
			case 2:
				printf("��: ��, ���: ��, ���\n");
				s++;
				break;
			}
			break;
		}
	}
	return 0;
}