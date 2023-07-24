#include <stdio.h>
#include <Windows.h>

int main()
{
	int size;						// 줄의 수
	char menu;						// 선택할 번호

	while (1)
	{
		printf("-----------------------------\n");
		printf("1. 왼쪽 직각 삼각형 찍기\n");
		printf("2. 오른쪽 직각 삼각형 찍기\n");
		printf("3. 왼쪽 직각 역삼각형 찍기\n");
		printf("4. 오른쪽 직각 역삼각형 찍기\n");
		printf("5. 종료\n");
		printf("-----------------------------\n");

		do {
			printf("==> 메뉴 선택: ");
			scanf(" %c", &menu);

			if (menu > '0' && menu < '6')
				break;
			else
				printf("입력 오류!! 메뉴를 다시 선택해주세요\n");
		} while (1);

		if (menu == '5')
		{
			printf("프로그램을 종료합니다\n");
			return 0;
		}

		printf("==> 삼각형 크기(line 수) 입력: ");
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