#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i=1;
	int count=0;
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9)//个位有九；
		{
			count++;
		}
		if (i % 100 - i % 10 == 90)
		{
			count++;
		}
	}
	printf("一共有%d个九", count);
	getchar();
	return 0;
}
