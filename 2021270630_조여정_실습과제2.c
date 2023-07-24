#include <stdio.h>
#define ¥ğ 3.14159265

int main()
{
	int h, a;
	double V, S;
	printf("Çï¸äÀÇ ³ôÀÌ: ");
	scanf("%d", &h);
	printf("base ¹İÁö¸§ ÀÔ·Â: ");
	scanf("%d", &a);
	V = ¥ğ / 6 * h * ((3.0 * a * a) + (long long)(h * h));
	S = 2 * ¥ğ * ((h / 3.0) + (V / ¥ğ / h / h)) * h;
	printf("Çï¸äÀÇ Ã¼Àû: %lf\n", V);
	printf("Çï¸äÀÇ Ç¥¸éÀû : %lf\n", S);

	return 0;
}