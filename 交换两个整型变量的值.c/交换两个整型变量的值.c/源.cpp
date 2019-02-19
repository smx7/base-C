#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	int c;
	a = 3;
	b = 4;
	printf("a=%d,b=%d\n", a, b);
	c = a, a = b, b = c;
	printf("½»»»ºó£º\n");
	printf("a=%d,b=%d", a, b);
	getchar();

	return 0;

}
