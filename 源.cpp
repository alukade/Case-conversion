#include<stdio.h>

int main()
{
	char c1, c2;
	printf("������һ����д��ĸ��");
	scanf_s("%c", &c1, sizeof(c1));//��ʹ��%c��%s�����ַ����ַ���ʱ��Ӧ�ڵ�ַ�����󸽼�һ���������߽�ֵ
	c2 = c1 + 32;//��д��ĸ��ASCII���32����Сд��ĸ��ASCII��
	printf("%c\n", c2);

	return 0;
}