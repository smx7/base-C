#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	a = 3;
	b = 4;
	printf("a=%d,b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("½»»»ºó£º\n");
	printf("a=%d,b=%d", a, b);
	getchar();
	return 0;
}
