#include <stdio.h>

int main()
{
	int all = 1, sumall = 0;					// for ���� 1�� ������ �ӽú��� all�� 1�� �ʱ�ȭ, sumall�� 1~num ��
	int even = 0, sumeven = 0;					// while ���ǽĿ��� �� 1�� ������ even�� 0���� �ʱ�ȭ, sumeven�� 1~num ¦�� ��
	int odd = 0, sumodd = 0;					// do while ���ǽĿ� �� 1�� ������ odd�� 0���� �ʱ�ȭ, sumodd�� 1~num Ȧ�� ��
	int num;									// �Է¹��� ���� ����
	
	printf("���� ���� �Է�: ");
	scanf("%d", &num);

	for (all; all <= num; all++)
		sumall += all;
	printf("\n1~%d������ ��: %d", num, sumall);

	while (even < num)
	{
		even++;
		if (even % 2 == 0)
			sumeven += even;
		else
			continue;
	}
	printf("\n1~%d���� ¦���� ��: %d", num, sumeven);

	do {
		odd++;
		if (odd % 2 == 1)
			sumodd += odd;
		else
			continue;
	} while (odd < num);
	printf("\n1~%d���� Ȧ���� ��: %d", num, sumodd);

	return 0;
}