#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i=1;
	int count=0;
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9)//��λ�оţ�
		{
			count++;
		}
		if (i % 100 - i % 10 == 90)
		{
			count++;
		}
	}
	printf("һ����%d����", count);
	getchar();
	return 0;
}
