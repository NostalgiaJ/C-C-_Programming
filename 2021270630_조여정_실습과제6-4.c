#include <stdio.h>
#include <stdlib.h>				// rand()�Լ� ����� ���� ��� ����
#include <time.h>				// time()�Լ� ����� ���� ��� ����

void divisors(int pos);

int main()
{
	int i;						// �ݺ� ���� �ӽ� ����
	
	srand((int)time(NULL));		// ���� seed �� ����

	for (i = 0; i < 3; i++)
	{
		int pos = rand() % ((1000 - 1) + 1) + 1;
		printf("%3d�� ���: ", pos);
		divisors(pos);
	}

	return 0;
}

void divisors(int pos)			// pos = positive integer(���� ����)
{
	int num = 2;				// ����� ���� (1�� pos������ +2)

	printf("1,");

	for (int j = 2; j < pos; j++)
	{
		if (pos % j == 0)
		{
			printf("%4d", j);
			num++;

			if (j != pos)
				printf(",");
			else
				break;
		}
	}

	printf("%4d => �� %d��\n", pos, num);
}