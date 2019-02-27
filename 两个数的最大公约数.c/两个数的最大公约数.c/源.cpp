#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, min;
	printf("请输入两个数\n");
	scanf("%d,%d", &a, &b);
	if (a < b)min = a;
	else min = b;
	int i, j;
	for (i = min; i >0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("最大公约数是%d", i);
			break;
		}
	}
	getchar();
	getchar();
	return 0;
}
