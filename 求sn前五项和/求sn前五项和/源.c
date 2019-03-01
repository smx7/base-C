#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	int i;
	int sn=0;
	printf("«Î ‰»Îa\n");
	scanf("%d", &a);
	b = a;
	for (i = 0; i < 5; i++)
	{
		sn = sn + b;
		b = 10 * b + a;
	}
	printf("sn=%d", sn);
	system("pause");
	return 0;
}
