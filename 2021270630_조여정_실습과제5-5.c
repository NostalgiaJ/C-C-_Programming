#include <stdio.h>

int main()
{
	int input = 0;						// �Է¹��� ����
	int sum = 0;						// �Էµ� ������ ��
	double num = 0;						// �Էµ� Ƚ��(-1 ������)
	double ave;							// �Էµ� ������ ���

	while (input != -1)
	{
		printf("���� �Է�(����: -1) ; ");
		scanf("%d", &input);

		if(input == -1)
			break;

		num += 1;
		sum += input;
	}

	ave = sum / num;

	printf("�Էµ� ������ ��: %d\n", sum);
	printf("�Էµ� ������ ���: %.2f\n", ave);

	return 0;
}