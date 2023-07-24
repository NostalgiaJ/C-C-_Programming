#include <stdio.h>
#include <string.h>
#define SIZE 100

int my_strlen(const char* p);
void my_strcpy(char* p1, const char* p2);
int my_strcmp(const char* p1, const char* p2);
void makeLower(char p[]);
void makeReverse(char p[]);
void strSwap(char* p1, char* p2);
void swap(char* a, char* b);

int main()
{
	char str1[SIZE], str2[SIZE], str3[SIZE];

	printf("문자열(str1) 입력: ");
	gets_s(str1, SIZE);
	printf("\nstr1의 길이 : %d\n", my_strlen(str1));
	
	my_strcpy(str2, str1);
	makeLower(str2);
	printf("\nstr1을 소문자로 변환 = %s\n", str2);
	
	my_strcpy(str3, str1);
	makeReverse(str3);
	printf("\nstr1의 역순 = %s\n", str3);
	
	if (my_strcmp(str1, str2))
		printf("\n%s == %s\n", str1, str2);
	if (!my_strcmp("abc", "abcd"))
		printf("\n\"abc\" != \"abcd\"\n\n");
	
	my_strcpy(str3, "C is fun");
	printf("------ strSwap() 함수 호출 전---------\n");
	printf("str1 = %s\nstr3 = %s\n", str1, str3);
	strSwap(str1, str3);
	printf("------ strSwap() 함수 호출 후---------\n");
	printf("str1 = %s\nstr3 = %s\n", str1, str3);
	return 0;
}

int my_strlen(const char* p)
{
	int i, len = 0;

	for (i = 0; p[i]; i++)
		len++;

	return len;
}

void my_strcpy(char* p1, const char* p2)
{
	for (; *p1 = *p2; p1++, p2++);
	
	/*
	for(; *p2 != NULL; p1++, p2++)
		*p1 = *p2;
	*p1 = NULL;
	*/
}

int my_strcmp(const char* p1, const char* p2)
{
	int i, size1, size2;
	
	size1 = my_strlen(p1);
	size2 = my_strlen(p2);
	
	if (size1 != size2)
		return 0;

	for (i = 0; i < size1; i++)
		if (p1[i] != p2[i])
			return 0;

	return 1;
}

void makeLower(char p[])
{	
	int size = my_strlen(p);

	for(int i = 0; i < size; i++, p++)
		if (*p >= 'A' && *p <= 'Z')
			*p += 32;
}

void makeReverse(char p[])
{
	int size = my_strlen(p);

	for (int i = 0; i < (size / 2); i++)
		swap(&p[i], &p[size - 1 - i]);
}

void strSwap(char* p1, char* p2)
{
	int i;
	int size, size1, size2;

	size1 = my_strlen(p1);
	size2 = my_strlen(p2);
	size = size1 > size2 ? size1 : size2;

	for (i = 0; i < size; i++)
		swap(p1 + i, p2 + i);
}

void swap(char* a, char* b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}