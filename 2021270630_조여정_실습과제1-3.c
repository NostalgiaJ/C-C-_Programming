#include <stdio.h>
#define SEC_PER_HOUR 3600
#define SEC_PER_MIN 60

int main()
{
	int hour, min, sec, Sumsec;
	
	printf("시간을 차례로 입력하세요(시, 분, 초) : ");
	scanf("%d %d %d", &hour, &min, &sec);
	Sumsec = (hour * SEC_PER_HOUR) + (min * SEC_PER_MIN) + sec;
	printf("%d시간 %d분 %d초는 총 %d초입니다.\n", hour, min, sec, Sumsec);

	printf("________________________________\n");

	printf("환산할 초를 입력하세요 : ");
	scanf(" %d", &Sumsec);
	hour = Sumsec / SEC_PER_HOUR;
	min = (Sumsec - (hour * SEC_PER_HOUR)) / SEC_PER_MIN;
	sec = (Sumsec - (hour * SEC_PER_HOUR)) % SEC_PER_MIN;
	printf(" %d초는 %d시간 %d분 %d초입니다.\n", Sumsec, hour, min, sec);

	return 0;
}