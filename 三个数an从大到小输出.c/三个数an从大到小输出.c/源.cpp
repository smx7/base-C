#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, t;
	int a[3];
	printf("请输入三个数\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 3 - j; i++)
		{
			if (a[i] < a[i + 1])t = a[i], a[i] = a[i + 1], a[i + 1] = t;
		}
	}
	printf("排序后：\n");
	for (i = 0; i < 3; i++)
	{
		printf("%4d", a[i]);
	}
	getchar();
	getchar();
	return 0;
}
