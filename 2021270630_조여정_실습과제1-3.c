#include <stdio.h>
#define SEC_PER_HOUR 3600
#define SEC_PER_MIN 60

int main()
{
	int hour, min, sec, Sumsec;
	
	printf("�ð��� ���ʷ� �Է��ϼ���(��, ��, ��) : ");
	scanf("%d %d %d", &hour, &min, &sec);
	Sumsec = (hour * SEC_PER_HOUR) + (min * SEC_PER_MIN) + sec;
	printf("%d�ð� %d�� %d�ʴ� �� %d���Դϴ�.\n", hour, min, sec, Sumsec);

	printf("________________________________\n");

	printf("ȯ���� �ʸ� �Է��ϼ��� : ");
	scanf(" %d", &Sumsec);
	hour = Sumsec / SEC_PER_HOUR;
	min = (Sumsec - (hour * SEC_PER_HOUR)) / SEC_PER_MIN;
	sec = (Sumsec - (hour * SEC_PER_HOUR)) % SEC_PER_MIN;
	printf(" %d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", Sumsec, hour, min, sec);

	return 0;
}