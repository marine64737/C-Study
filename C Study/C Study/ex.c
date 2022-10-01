#include <stdio.h>
#include <string.h>

struct employee
{
	char name[20];
	char registration[20];
	int salary;
};

int main(void)
{
	struct employee man[3];
	for (int i = 0; i < 3; i++) {
		printf("직원 %d 이름 입력: ", i + 1); scanf_s("%s", man[i].name, sizeof(man[i].name));
		printf("직원 %d 주민번호 입력: ", i + 1); scanf_s("%s", man[i].registration, sizeof(man[i].registration));
		printf("직원 %d 급여정보 입력: ", i + 1); scanf_s("%d", &man[i].salary);
	}
	
	for (int i = 0; i < 3; i++) {
		printf("이름: %s\n", man[i].name);
		printf("주민번호: %s\n", man[i].registration);
		printf("급여정보: 월 %d만 원\n", man[i].salary);
	}

	return 0;
}