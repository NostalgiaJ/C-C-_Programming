#include <stdio.h>

typedef struct point {
	int x, y;
} point_t;
typedef struct retangle {
	point_t p1;
	point_t p2;
} rect_t;

double computeArea(rect_t r);
int isSquare(const rect_t* p);

int main()
{
	rect_t rec;

	printf("사각형의 대각 점 좌표 입력\n");
	printf("첫번째 점 좌표: ");
	scanf("%d %d", &rec.p1.x, &rec.p1.y);
	printf("두번째 점 좌표: ");
	scanf("%d %d", &rec.p2.x, &rec.p2.y);

	printf("\n사각형의 면적: %.2f\n", computeArea(rec));

	if(isSquare(&rec))
		printf("\n입력하신 사각형은 정사각형입니다.\n");
	else
		printf("\n입력하신 사각형은 직사각형입니다.\n");

	return 0;
}

double computeArea(rect_t r)
{
	double vertical, horizontal;

	if (r.p1.y > r.p2.y)
		vertical = ((double)r.p1.y - r.p2.y);
	else
		vertical = ((double)r.p2.y - r.p1.y);

	if (r.p1.x > r.p2.x)
		horizontal = ((double)r.p1.x - r.p2.x);
	else
		horizontal = ((double)r.p2.x - r.p1.x);

	return vertical * horizontal;
}

int isSquare(const rect_t* p)
{
	if ((p->p1.x) - (p->p2.x) == (p->p1.y) - (p->p2.y))
		return 1;
	else if((p->p1.x) - (p->p2.x) == -1 * ((p->p1.y) - (p->p2.y)))
		return 1;
	else
		return 0;
}