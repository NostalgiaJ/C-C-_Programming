#include <stdio.h>

int main()
{
	double fah, cel;
	printf("È­¾¾¿Âµµ? ");
	scanf("%lf", &fah);
	cel = (fah - 32) * (5.0/9.0);
	printf("%.0lf F = %.2lf C\n", fah, cel);
	
	return 0;
}