#include <stdio.h>
#include <Windows.h>

int main()
{
	int size;						// ���� ��
	char menu;						// ������ ��ȣ

	while (1)
	{
		printf("-----------------------------\n");
		printf("1. ���� ���� �ﰢ�� ���\n");
		printf("2. ������ ���� �ﰢ�� ���\n");
		printf("3. ���� ���� ���ﰢ�� ���\n");
		printf("4. ������ ���� ���ﰢ�� ���\n");
		printf("5. ����\n");
		printf("-----------------------------\n");

		do {
			printf("==> �޴� ����: ");
			scanf(" %c", &menu);

			if (menu > '0' && menu < '6')
				break;
			else
				printf("�Է� ����!! �޴��� �ٽ� �������ּ���\n");
		} while (1);

		if (menu == '5')
		{
			printf("���α׷��� �����մϴ�\n");
			return 0;
		}

		printf("==> �ﰢ�� ũ��(line ��) �Է�: ");
		scanf("%d", &size);

		switch (menu)
		{
			case '1':
				printf("\n");
				for (int i = 0; i < size; i++)
				{
					for (int star = 0; star <= i; star++)
						printf("*");
			
					printf("\n");
				}
				printf("\n");
				break;
			case '2':
				printf("\n");
				for (int i = 0; i < size; i++)
				{
					for (int star = 1; star < (size - i); star++)
						printf(" ");
					for (int star = 0; star <= i; star++)
						printf("*");

					printf("\n");
				}
				printf("\n");
				break;
			case '3':
				printf("\n");
				for (int i = 0; i < size; i++)
				{
					for (int star = size; star > i; star--)
						printf("*");

					printf("\n");
				}
				printf("\n");
				break;
			case '4':
				printf("\n");
				for (int i = 0; i <= size; i++)
				{
					for (int star = 0; star < i; star++)
						printf(" ");
					for (int star = size; star > i; star--)
						printf("*");

					printf("\n");
				}
				printf("\n");
				break;
		}

		system("pause");

		system("cls");
	}
}