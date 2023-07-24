#include <stdio.h>
#define ARRSIZE 10

int main()
{
	int isomseq[ARRSIZE];		// isomseq(Isometric sequence) : 등차수열
	
	int first, comdif;			// first : 첫 번째 항, comdif(common difference) : 공차

	printf("첫 번째 항? ");
	scanf("%d", &first);
	printf("공차? ");
	scanf("%d", &comdif);

	isomseq[0] = first;

	int i;
	for (i = 1; i < 10; i++)
		isomseq[i] = first + (i * comdif);

	printf("등차수열: ");
	for (i = 0; i < 10; i++)
		printf("%d ", isomseq[i]);

	return 0;
}