#include <stdio.h>
#define MAX_STD 5

struct student {
	char name[20];
	int korean, english, math;
	double average;
};

int main(void)
{
	struct student std[MAX_STD];
	int i;
	double total_average = 0;

	printf("%d ���� �л� ������ �Է��ϼ���.\n", MAX_STD);

	for (i = 0; i < MAX_STD; i++) // �л� ���� �Է� �� ��� ���
	{
		printf("�̸� : ");
		scanf("%s", std[i].name);

		printf("����, ����, ���� ���� : ");
		scanf("%d %d %d", &std[i].korean, &std[i].english, &std[i].math);
		
		std[i].average = ((double)std[i].korean + std[i].english + std[i].math) / 3;
		total_average += std[i].average;
	}

	total_average /= MAX_STD; // ��ü ��� ���
	
	printf("\n�̸�       ���� ���� ���� ���\n"); // �л� ���� ���(���� �� ����)
	
	for (i = 0; i < MAX_STD; i++)
		printf("%-6s%9d%5d%5d%8.2f\n", std[i].name, std[i].korean, std[i].english, std[i].math, std[i].average);
	
	printf("��ü ��� : %6.2f\n", total_average);
	
	return 0;
}
