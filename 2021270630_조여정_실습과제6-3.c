#include <stdio.h>

int GetDaysOfMonth(int year, int month);
int isLeapYear(int year);

int main()
{
	int year;				// 입력받을 연도
	int month;				// 입력받을 월
	int number;				// 출력할 해당 월의 날짜

	printf("연도와 월을 입력하세요 : ");
	scanf("%d %d", &year, &month);

	number = GetDaysOfMonth(year, month);

	printf("%d년 %d월은 %d일입니다.", year, month, number);

	return 0;
}

int GetDaysOfMonth(int year, int month)
{
	int number;				// 날짜 수
	int month2;				// 2월

	switch (month)
	{
		case 1:	case 3:	case 5:	case 7:
		case 8:	case 10: case 12:	
			number = 31;
			break;

		case 4:	case 6:	case 9:	case 11:
			number = 30;
			break;

		default:
			month2 = isLeapYear(year);

			if (month2 == 1)
				number = 29;
			else
				number = 28;

			break;
	}
	return number;
}

int isLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}