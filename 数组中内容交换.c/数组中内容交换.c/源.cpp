#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int b[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int i, t;
	for (i = 0; i <sizeof(a)/sizeof(a[0]); i++)
	{
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d", b[i]);
	}
	getchar();
	return 0;
}
