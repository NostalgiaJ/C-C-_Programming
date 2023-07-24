#include <stdio.h>
#include <math.h>

void display_point(int x, int y);
double compute_distance(double x1, double y1, double x2, double y2);
void move_point(int* x, int* y, int move);

int main()
{
	int x1, x2, y1, y2, move;
	double distance;

	printf("p1 ��ǥ �Է�(x��, y�� ��ǥ�� �Է�): ");
	scanf("%d %d", &x1, &y1);
	
	printf("p2 ��ǥ �Է�(x��, y�� ��ǥ�� �Է�): ");
	scanf("%d %d", &x2, &y2);
	
	printf("p1 = ");
	display_point(x1, y1);
	
	printf("p2 = ");
	display_point(x2, y2);

	distance = compute_distance(x1, y1, x2, y2);
	printf("���� ������ �Ÿ� = %g\n", distance);
	
	printf("\n��ǥ �̵��� �Է�: ");
	scanf("%d", &move);
	
	move_point(&x2, &y2, move);
	
	printf("p2�� x��� y������ ���� %d ��ŭ �̵� = ", move);
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
