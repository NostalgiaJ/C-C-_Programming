#include <stdio.h>

int round(double realnum);

int main()
{
	int integer;						// integer ����
	double realnum = 1;					// real number �Ǽ�

	while (realnum != 0.0)
	{
		printf("�Ǽ��� �Է��ϼ��� (0.0 �Է½� ����) : ");
		scanf("%lf", &realnum);

		if (realnum == 0.0)
			break;

		integer = round(realnum);

		printf("%f�� �ݿø� ��� = %d\n\n", realnum, integer);
	}

	return 0;
}

int round(double realnum)
{
	int integer;

	if (realnum > 0)
		integer = realnum + 0.5;
	else
		integer = realnum - 0.5;

	return integer;
}