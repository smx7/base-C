#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[10]={ '1', '3', '5', '7', '9' };
	int ch = 0;
	int i;
	printf("请输入密码\n");
	char arr2[10] = { 0 };
	for (i = 0; i < 3; i++)
	{
		scanf("%s", arr2);
		if (strcmp(arr1,arr2) == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	if (i == 3)
	{
		printf("三次输入错误，退出程序\n");
	}
	system("pause");
	return 0;
}
