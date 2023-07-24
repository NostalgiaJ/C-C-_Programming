#include <stdio.h>

int main()
{
	int input = 0;						// 입력받을 정수
	int sum = 0;						// 입력된 정수의 합
	double num = 0;						// 입력된 횟수(-1 전까지)
	double ave;							// 입력된 정수의 평균

	while (input != -1)
	{
		printf("정수 입력(종료: -1) ; ");
		scanf("%d", &input);

		if(input == -1)
			break;

		num += 1;
		sum += input;
	}

	ave = sum / num;

	printf("입력된 정수의 합: %d\n", sum);
	printf("입력된 정수의 평균: %.2f\n", ave);

	return 0;
}