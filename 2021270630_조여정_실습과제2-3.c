#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;							// ������ (a!=0)
	double discr;							// �Ǻ���(discriminant)
	double root1, root2;					// 2�� �������� ��

	printf("2�� �������� ������ a, b, c �Է�: ");
	scanf("%d %d %d", &a, &b, &c);

	discr = ((double)b * b) - (4.0 * a * c);

	root1 = (-b / 2.0 / a) + sqrt(discr) / 2.0 / a;
	root2 = (-b / 2.0 / a) - sqrt(discr) / 2.0 / a;

	if (discr > 0)
		printf("�Է��Ͻ� 2�� �������� �� �� x1 = %g, x2 = %g �� �����ϴ�\n", root1, root2);
	else if (discr == 0)
		printf("�Է��Ͻ� 2�� �������� �߱� x = %g �� �����ϴ�\n", root1);
	else
		printf("�Է��Ͻ� 2�� �������� ����� �����ϴ�\n");

	return 0;
}