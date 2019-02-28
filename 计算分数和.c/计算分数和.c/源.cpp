#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	float j;
	float num = 0.0;
	for (i = 1; i <101; i++)
	{
		j = (float)1 / i;
		if (i % 2 == 0)
		{
			j = -j;
		}
			num = num +j;
		
	}
	printf("ºÍÎª%f", num);
	getchar();
	return 0;
}
