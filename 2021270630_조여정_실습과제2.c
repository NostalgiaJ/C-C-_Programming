#include <stdio.h>
#define �� 3.14159265

int main()
{
	int h, a;
	double V, S;
	printf("����� ����: ");
	scanf("%d", &h);
	printf("base ������ �Է�: ");
	scanf("%d", &a);
	V = �� / 6 * h * ((3.0 * a * a) + (long long)(h * h));
	S = 2 * �� * ((h / 3.0) + (V / �� / h / h)) * h;
	printf("����� ü��: %lf\n", V);
	printf("����� ǥ���� : %lf\n", S);

	return 0;
}