#include <stdio.h>

int main()
{
	double input;
	double cel, fah;				// cel(c) : Celsius, fah(f) : fahrenheit
	char sort;						// sort : Kinds of Temperature

	printf("�µ�? ");
	scanf("%lf %c", &input, &sort);

	cel = (5.0 / 9.0) * (input - 32);
	fah = (9.0 / 5.0) * input + 32;

	if (sort == 'c' || sort == 'C')
		sort = 1;
	else if (sort == 'f' || sort == 'F')
		sort = 2;
	else
		sort = 3;

	switch (sort)
	{
	case 1:
		printf("%g C == %.2f F\n", input, fah);
		break;
	case 2:
		printf("%g F == %.2f C\n", input, cel);
		break;
	default:
		printf("�Է� ����!! �µ��� ������ C(�Ǵ� c)�� F(�Ǵ� c)�� �����մϴ�.\n");
		break;
	}

	return 0;
}