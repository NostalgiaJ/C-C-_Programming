#include <stdio.h>

int main()
{
	int integer, multiple;			// �Է¹��� ���� ���� integer�� ����� ���� multiple
	int i = 1;						// for ���� ���� �ӽú��� 1�� �ʱ�ȭ
	
	printf("���� ����? ");
	scanf("%d", &integer);
	printf("����� ����? ");
	scanf("%d", &multiple);

	for (i; i <= multiple; i++)
		printf("%d ", integer * i);

	printf("\n");
	return 0;
}