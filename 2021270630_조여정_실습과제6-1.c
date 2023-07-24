#include <stdio.h>

int round(double realnum);

int main()
{
	int integer;						// integer 정수
	double realnum = 1;					// real number 실수

	while (realnum != 0.0)
	{
		printf("실수를 입력하세요 (0.0 입력시 종료) : ");
		scanf("%lf", &realnum);

		if (realnum == 0.0)
			break;

		integer = round(realnum);

		printf("%f의 반올림 결과 = %d\n\n", realnum, integer);
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