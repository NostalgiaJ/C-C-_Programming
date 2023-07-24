#include <stdio.h>

int GetDaysOfMonth(int year, int month);
int isLeapYear(int year);

int main()
{
	int year;				// �Է¹��� ����
	int month;				// �Է¹��� ��
	int number;				// ����� �ش� ���� ��¥

	printf("������ ���� �Է��ϼ��� : ");
	scanf("%d %d", &year, &month);

	number = GetDaysOfMonth(year, month);

	printf("%d�� %d���� %d���Դϴ�.", year, month, number);

	return 0;
}

int GetDaysOfMonth(int year, int month)
{
	int number;				// ��¥ ��
	int month2;				// 2��

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