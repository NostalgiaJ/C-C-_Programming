#include <stdio.h>

int main()
{
	double x, y;
	
	printf("���� ��ǥ (x, y)? ");
	scanf("%lf %lf", &x, &y);

	if (x > 0.0)
	{
		if (y > 0.0)
			printf("(%g,%g)�� 1��и鿡 �ֽ��ϴ�\n", x, y);
		else if (y < 0)
			printf("(%g,%g)�� 4��и鿡 �ֽ��ϴ�\n", x, y);
		else
			printf("(%g,%g)�� x�� ���� �ֽ��ϴ�\n", x, y);
	}
	else if (x < 0.0)
	{
		if (y > 0.0)
			printf("(%g,%g)�� 2��и鿡 �ֽ��ϴ�\n", x, y);
		else if (y < 0.0)
			printf("(%g,%g)�� 3��и鿡 �ֽ��ϴ�\n", x, y);
		else
			printf("(%g,%g)�� x�� ���� �ֽ��ϴ�\n", x, y);
	}
	else
	{
		if (y != 0.0)
			printf("(%g,%g)�� y�� ���� �ֽ��ϴ�\n", x, y);
		else
			printf("(%g,%g)�� �����Դϴ�\n", x, y);
	}

	return 0;
}