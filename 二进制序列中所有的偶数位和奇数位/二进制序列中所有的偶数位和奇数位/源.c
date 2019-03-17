#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	char arr1[33] = { 0 };
	char arr2[17] = { 0 };
	char arr3[17] = { 0 };
	int i, j;
	printf("请输入一个数字\n");
	scanf("%d", &input);
	for (i = sizeof(arr1) / sizeof(arr1[0]) -2; i >= 0; i--)
	{
		if (input % 2 == 1)
		{
			arr1[i] = '1';
		}
		else
		{
			arr1[i] =' 0';
		}
		input = input / 2;
	}
	printf("二进制序列为%s\n", arr1);
	i = 0;
	for (j = 0; j <sizeof(arr2) / sizeof(arr2[0]) - 1; j++)
	{
		arr2[j] = arr1[i];
		i += 2;
	}
	printf("偶数位二进制序列为%s\n", arr2);
	i = 1;
	for (j = 0; j <sizeof(arr3) / sizeof(arr3[0]) - 1; j++)
	{
		arr3[j] = arr1[i];
		i += 2;
	}
	printf("奇数位二进制序列为%s\n", arr3);
	system("pause");
	return 0;
}
