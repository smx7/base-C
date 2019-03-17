#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int m, n,i;
	int count = 0;
	char arr1[33] = { 0 };
	char arr2[33] = { 0 };
	printf("输入两个数\n");
	scanf("%d%d", &m, &n);
	for (i = sizeof(arr1) / sizeof(arr1[0]) - 2; i >= 0; i--)
	{
		if (m % 2 == 1)
		{
			arr1[i] = '1';
		}
		else
		{
			arr1[i] = '0';
		}
		m = m / 2;
	}
	printf("m的二进制序列为%s\n", arr1);
	for (i = sizeof(arr2) / sizeof(arr2[0]) - 2; i >= 0; i--)
	{
		if (n % 2 == 1)
		{
			arr2[i] = '1';
		}
		else
		{
			arr2[i] = '0';
		}
		n = n/ 2;
	}
	printf("n的二进制序列为%s\n", arr2);
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]) - 1; i++)
	{
		if (arr1[i] != arr2[i])
		{
			count++;
		}
	}
	printf("有%d位不同\n", count);
	system("pause");
	return 0;
}
