#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;							// 상관계수 (a!=0)
	double discr;							// 판별식(discriminant)
	double root1, root2;					// 2차 방정식의 근

	printf("2차 방정식의 상관계수 a, b, c 입력: ");
	scanf("%d %d %d", &a, &b, &c);

	discr = ((double)b * b) - (4.0 * a * c);

	root1 = (-b / 2.0 / a) + sqrt(discr) / 2.0 / a;
	root2 = (-b / 2.0 / a) - sqrt(discr) / 2.0 / a;

	if (discr > 0)
		printf("입력하신 2차 방정식은 두 근 x1 = %g, x2 = %g 을 갖습니다\n", root1, root2);
	else if (discr == 0)
		printf("입력하신 2차 방정식은 중근 x = %g 을 갖습니다\n", root1);
	else
		printf("입력하신 2차 방정식은 허근을 갖습니다\n");

	return 0;
}