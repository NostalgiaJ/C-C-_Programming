#include <stdio.h>
#define MAX_STD 5

struct student {
	char name[20];
	int korean, english, math;
	double average;
};

void input_student(struct student* s);
void output_student(struct student s);
double compute_class_avg(struct student p[], int size);
int Find_First(struct student p[], int size);

int main(void)
{
	struct student std[MAX_STD];
	int i, first;
	double total_average = 0;

	printf("%d 명의 학생 정보를 입력하세요.\n", MAX_STD);
	for (i = 0; i < MAX_STD; i++)
		input_student(&std[i]);	// input_student() 함수 호출문
	
	printf("\n이름       국어 영어 수학     평균\n");
	for (i = 0; i < MAX_STD; i++)
		output_student(std[i]);	// output_student() 함수 호출문
	
	total_average = compute_class_avg(std, MAX_STD);
	// compute_class_avg() 함수 호출문
		
	printf("\n전체 평균 : %6.2f\n", total_average);

	first = Find_First(std, MAX_STD);
	// Find_First() 함수 호출문

	printf("\n우리 반 1등은 %s입니다\n", std[first].name);
	return 0;
}

void input_student(struct student* s)
{
	printf("이름 : ");
	scanf("%s", s->name);

	printf("국어, 영어, 수학 점수 : ");
	scanf("%d %d %d", &s->korean, &s->english, &s->math);

	s->average = ((double)s->korean + s->english + s->math) / 3;
}

void output_student(struct student s)
{
	printf("%-6s%9d%5d%5d%8.2f\n", s.name, s.korean, s.english, s.math, s.average);
}

double compute_class_avg(struct student p[], int size)
{
	int i;
	double sum = 0;
	for (i = 0; i < MAX_STD; i++)
		sum += p[i].average;

	return sum / size;
}

int Find_First(struct student p[], int size)
{
	int i, winner = 0;
	
	for (i = 0; MAX_STD; i++)
		if (p[i].average > winner)
			winner = i;

	return winner;
}
