#include <stdio.h>
#define ARRSIZE 10

int main()
{
	int isomseq[ARRSIZE];		// isomseq(Isometric sequence) : ��������
	
	int first, comdif;			// first : ù ��° ��, comdif(common difference) : ����

	printf("ù ��° ��? ");
	scanf("%d", &first);
	printf("����? ");
	scanf("%d", &comdif);

	isomseq[0] = first;

	int i;
	for (i = 1; i < 10; i++)
		isomseq[i] = first + (i * comdif);

	printf("��������: ");
	for (i = 0; i < 10; i++)
		printf("%d ", isomseq[i]);

	return 0;
}