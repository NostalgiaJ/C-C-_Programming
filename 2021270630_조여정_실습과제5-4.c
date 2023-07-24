#include <stdio.h>

int main()
{
	int all = 1, sumall = 0;					// for 에서 1씩 증가할 임시변수 all을 1로 초기화, sumall은 1~num 합
	int even = 0, sumeven = 0;					// while 조건식에서 들어가 1씩 증가할 even을 0으로 초기화, sumeven은 1~num 짝수 합
	int odd = 0, sumodd = 0;					// do while 조건식에 들어가 1씩 증가할 odd를 0으로 초기화, sumodd는 1~num 홀수 합
	int num;									// 입력받을 양의 정수
	
	printf("양의 정수 입력: ");
	scanf("%d", &num);

	for (all; all <= num; all++)
		sumall += all;
	printf("\n1~%d까지의 합: %d", num, sumall);

	while (even < num)
	{
		even++;
		if (even % 2 == 0)
			sumeven += even;
		else
			continue;
	}
	printf("\n1~%d까지 짝수의 합: %d", num, sumeven);

	do {
		odd++;
		if (odd % 2 == 1)
			sumodd += odd;
		else
			continue;
	} while (odd < num);
	printf("\n1~%d까지 홀수의 합: %d", num, sumodd);

	return 0;
}