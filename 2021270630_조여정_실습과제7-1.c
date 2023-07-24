#include <stdio.h>

int main()
{
	int dig[12];
	int sum;

	printf("Please enter the first eleven UPC digits, separated by white space: \n");

	int i;
	for (i = 0; i < 11; i++)
		scanf("%1d", &dig[i]);

	for (i = 0; i < 11; i++)
		printf("%1d", dig[i]);

	sum = 0;
	for (i = 0; i < 11; i += 2)
		sum += (3 * dig[i]);

	for (i = 1; i < 11; i += 2)
		sum += dig[i];

	dig[11] = (10 - sum % 10) % 10;

	printf("\nThe check digit is %d\n", dig[11]);

	return 0;
}