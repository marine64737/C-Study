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
		printf("���� %d �̸� �Է�: ", i + 1); scanf_s("%s", man[i].name, sizeof(man[i].name));
		printf("���� %d �ֹι�ȣ �Է�: ", i + 1); scanf_s("%s", man[i].registration, sizeof(man[i].registration));
		printf("���� %d �޿����� �Է�: ", i + 1); scanf_s("%d", &man[i].salary);
	}
	
	for (int i = 0; i < 3; i++) {
		printf("�̸�: %s\n", man[i].name);
		printf("�ֹι�ȣ: %s\n", man[i].registration);
		printf("�޿�����: �� %d�� ��\n", man[i].salary);
	}

	return 0;
}