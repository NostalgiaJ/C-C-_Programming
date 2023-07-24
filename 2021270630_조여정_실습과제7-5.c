#include <stdio.h>
#define ROW 4
#define COL 5

int main()
{
	int arr[ROW][COL] = { {5, 7, 4, 3}, {6, 1, 8, 3}, {3, 2, 7, 6} };
	int sum = 0;


	int i, j;
	for (i = 0; i < (ROW - 1); i++)
	{
		for (j = 0; j < (COL - 1); j++)
			sum += arr[i][j];

		arr[i][COL - 1] = sum;
		sum = 0;
	}
	
	for (j = 0; j < (COL - 1); j++)
	{
		for (i = 0; i < (ROW - 1); i++)
			sum += arr[i][j];

		arr[ROW - 1][j] = sum;
		sum = 0;
	}

	for (i = (ROW - 1), j = 0; j < (COL - 1); j++)
		sum += arr[i][j];

	arr[ROW - 1][COL - 1] = sum;

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (j == (COL - 1))
				printf("| ");
			printf("%2d  ", arr[i][j]);
		}
		printf("\n");

		if (i == (ROW - 2))
			printf("---------------------\n");
	}

	return 0;
}