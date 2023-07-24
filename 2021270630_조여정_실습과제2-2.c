#include <stdio.h>

int main()
{
	double input;
	double cel, fah;				// cel(c) : Celsius, fah(f) : fahrenheit
	char sort;						// sort : Kinds of Temperature

	printf("온도? ");
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
		printf("입력 오류!! 온도의 단위는 C(또는 c)와 F(또는 c)만 가능합니다.\n");
		break;
	}

	return 0;
}