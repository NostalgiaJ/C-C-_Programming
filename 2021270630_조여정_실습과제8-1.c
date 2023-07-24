#include <stdio.h>
#include <math.h>

void display_point(int x, int y);
double compute_distance(double x1, double y1, double x2, double y2);
void move_point(int* x, int* y, int move);

int main()
{
	int x1, x2, y1, y2, move;
	double distance;

	printf("p1 좌표 입력(x축, y축 좌표값 입력): ");
	scanf("%d %d", &x1, &y1);
	
	printf("p2 좌표 입력(x축, y축 좌표값 입력): ");
	scanf("%d %d", &x2, &y2);
	
	printf("p1 = ");
	display_point(x1, y1);
	
	printf("p2 = ");
	display_point(x2, y2);

	distance = compute_distance(x1, y1, x2, y2);
	printf("두점 사이의 거리 = %g\n", distance);
	
	printf("\n좌표 이동량 입력: ");
	scanf("%d", &move);
	
	move_point(&x2, &y2, move);
	
	printf("p2을 x축과 y축으로 각각 %d 만큼 이동 = ", move);
	display_point(x2, y2);
	
	return 0;
}

void display_point(int x, int y)
{
	printf("(%d, %d)\n", x, y);
}

double compute_distance(double x1, double y1, double x2, double y2)
{
	double distance;
	distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	return distance;
}

void move_point(int *x, int *y, int move)
{
	*x += move;
	*y += move;
}
