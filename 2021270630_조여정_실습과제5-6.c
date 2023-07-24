#include <stdio.h>

int main()
{
	int integer, multiple;			// 입력받을 양의 정수 integer와 배수의 개수 multiple
	int i = 1;						// for 에서 사용될 임시변수 1로 초기화
	
	printf("양의 정수? ");
	scanf("%d", &integer);
	printf("배수의 개수? ");
	scanf("%d", &multiple);

	for (i; i <= multiple; i++)
		printf("%d ", integer * i);

	printf("\n");
	return 0;
}