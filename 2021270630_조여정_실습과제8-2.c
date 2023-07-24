#include <stdio.h>
#define MAX 50

int getArray(int p[]);
void printArray(const int p[], int size);
double computeAverage(const int p[], int size);
void copySquareArray(int p1[], const int p2[], int size);
void swapArray(int p1[], int p2[], int size);

int main()
{
	int arr1[MAX], arr2[MAX];
	double average;
	int no;

	no = getArray(arr1);

	printf("\narr1 = ");
	printArray(arr1, no);
	
	average = computeAverage(arr1, no);
	printf("arr1�� ���: %g \n", average);
	
	copySquareArray(arr2, arr1, no);
	printf("\n==== squreArray() �Լ� ȣ���� ======\n");
	printf("arr2 = ");
	printArray(arr2, no);
	
	swapArray(arr1, arr2, no);
	printf("\n==== swapArray() �Լ� ȣ���� ======\n");
	printf("arr1 = ");
	printArray(arr1, no);
	printf("arr2 = ");
	printArray(arr2, no);
	
	return 0;
}

int getArray(int p[])
{
	int size;

	do
	{
		printf("��� ������ �Է��Ͻðڽ��ϱ�? ");
		scanf("%d", &size);

		if (size > MAX)
			printf("�ִ� �Է� ������ %d�� �Դϴ�. ���Է��ϼ���.\n", MAX);
		else
			break;
	} while (1);

	printf("%d���� ���� �Է�: ", size);
	
	int i;
	for (i = 0; i < size; i++)
	{
		scanf("%d", p + i);
	}

	return size;
}

void printArray(const int p[], int size)
{
	printf("{");

	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d", p[i]);

		if (i != size - 1)
			printf(", ");
	}

	printf("}\n");
}

double computeAverage(const int p[], int size)
{
	int i, sum = 0;
	double ave;

	for (i = 0; i < size; i++)
	{
		sum += *p;
		p++;
	}

	ave = (double)sum / size;
	
	return ave;
}

void copySquareArray(int p1[], const int p2[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		p1[i] = p2[i] * p2[i];
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swapArray(int p1[], int p2[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		swap(p1 + i, p2 + i);
	}
}