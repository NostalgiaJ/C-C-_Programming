#include <stdio.h>
#define MAX_STD 5

struct student {
	char name[20];
	int korean, english, math;
	double average;
};

int main(void)
{
	struct student std[MAX_STD];
	int i;
	double total_average = 0;

	printf("%d 명의 학생 정보를 입력하세요.\n", MAX_STD);

	for (i = 0; i < MAX_STD; i++) // 학생 정보 입력 및 평균 계산
	{
		printf("이름 : ");
		scanf("%s", std[i].name);

		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d", &std[i].korean, &std[i].english, &std[i].math);
		
		std[i].average = ((double)std[i].korean + std[i].english + std[i].math) / 3;
		total_average += std[i].average;
	}

	total_average /= MAX_STD; // 전체 평균 계산
	
	printf("\n이름       국어 영어 수학 평균\n"); // 학생 정보 출력(실행 예 참고)
	
	for (i = 0; i < MAX_STD; i++)
		printf("%-6s%9d%5d%5d%8.2f\n", std[i].name, std[i].korean, std[i].english, std[i].math, std[i].average);
	
	printf("전체 평균 : %6.2f\n", total_average);
	
	return 0;
}
