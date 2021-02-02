#include<stdio.h>

int main()
{
	char c1, c2;
	printf("请输入一个大写字母：");
	scanf_s("%c", &c1, sizeof(c1));//在使用%c和%s读入字符或字符串时，应在地址参数后附加一个缓冲区边界值
	c2 = c1 + 32;//大写字母的ASCII码加32就是小写字母的ASCII码
	printf("%c\n", c2);

	return 0;
}