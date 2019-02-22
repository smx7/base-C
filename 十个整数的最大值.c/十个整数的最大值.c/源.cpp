#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int i = 0;
	printf("请输入十个整数\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int max;
	max = a[0];
	for (i = 0; i < 10; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
	}
	printf("max=%d", max);
	getchar();
	getchar();
	return 0;
}
