#include <stdio.h>
#define ARRSIZE 10

int main()
{
	int arr[ARRSIZE];
	int max, min;

	printf("���� 10�� �Է� : ");
	
	int i;
	for (i = 0; i < ARRSIZE; i++)
		scanf("%d", &arr[i]);

	max = arr[0];
	min = arr[ARRSIZE - 1];

	for (i = 1; i < ARRSIZE; i++)
		if (max < arr[i])
			max = arr[i];

	for (i = ARRSIZE - 2; i > 0; i--)
		if (min > arr[i])
			min = arr[i];

	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);

	return 0;
}