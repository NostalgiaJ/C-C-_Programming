#include <stdio.h>
#include <stdlib.h>				// rand()함수 사용을 위한 헤더 파일
#include <time.h>				// time()함수 사용을 위한 헤더 파일

void divisors(int pos);

int main()
{
	int i;						// 반복 위한 임시 변수
	
	srand((int)time(NULL));		// 랜덤 seed 값 설정

	for (i = 0; i < 3; i++)
	{
		int pos = rand() % ((1000 - 1) + 1) + 1;
		printf("%3d의 약수: ", pos);
		divisors(pos);
	}

	return 0;
}

void divisors(int pos)			// pos = positive integer(양의 정수)
{
	int num = 2;				// 약수의 개수 (1과 pos값까지 +2)

	printf("1,");

	for (int j = 2; j < pos; j++)
	{
		if (pos % j == 0)
		{
			printf("%4d", j);
			num++;

			if (j != pos)
				printf(",");
			else
				break;
		}
	}

	printf("%4d => 총 %d개\n", pos, num);
}