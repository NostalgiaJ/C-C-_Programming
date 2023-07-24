#include	<stdio.h>

int isLeapYear(int year);

int main()
{
	int year;				// ����
	int num = 0;			// ��µ� ����
	int judgement;			// �������� ������� �Ǵ�

	printf("-----------------------------------------------------------\n");
	printf("                   2000~2150������ ����\n");
	printf("-----------------------------------------------------------\n");
	
	for (year = 2000; year <= 2150; year++)
	{
		judgement = isLeapYear(year);

		if (judgement == 1)
			printf(" %d ", year);
		else
			continue;
			
		num++;

		if (num % 10 == 0)
			printf("\n");
	}

	printf("\n");

	return 0;
}

int isLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}