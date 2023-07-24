#include <stdio.h>

int main()
{
	double x, y;
	
	printf("점의 좌표 (x, y)? ");
	scanf("%lf %lf", &x, &y);

	if (x > 0.0)
	{
		if (y > 0.0)
			printf("(%g,%g)은 1사분면에 있습니다\n", x, y);
		else if (y < 0)
			printf("(%g,%g)은 4사분면에 있습니다\n", x, y);
		else
			printf("(%g,%g)은 x축 위에 있습니다\n", x, y);
	}
	else if (x < 0.0)
	{
		if (y > 0.0)
			printf("(%g,%g)은 2사분면에 있습니다\n", x, y);
		else if (y < 0.0)
			printf("(%g,%g)은 3사분면에 있습니다\n", x, y);
		else
			printf("(%g,%g)은 x축 위에 있습니다\n", x, y);
	}
	else
	{
		if (y != 0.0)
			printf("(%g,%g)은 y축 위에 있습니다\n", x, y);
		else
			printf("(%g,%g)은 원점입니다\n", x, y);
	}

	return 0;
}