#include	<stdio.h>

int isLeapYear(int year);

int main()
{
	int year;				// 연도
	int num = 0;			// 출력된 개수
	int judgement;			// 윤년인지 평년인지 판단

	printf("-----------------------------------------------------------\n");
	printf("                   2000~2150사이의 윤년\n");
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