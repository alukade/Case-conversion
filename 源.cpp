#include<stdio.h>

int main()
{
	char c1, c2;
	printf("请输入一个大写字母：");
	scanf_s("%c", &c1, sizeof(c1));
	c2 = c1 + 32;
	printf("%c\n", c2);

	return 0;
}