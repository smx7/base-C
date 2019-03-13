#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int m, n;
	int count = 0;
	int a, b, c;
	printf("«Î ‰»Îm£¨n\n");
	scanf("%d%d", &m, &n);
	for (i = m; i <= n; i++)
	{
		a = i % 10;
		b = ((i - a) % 100) / 10;
		c = (i - a - 10 * b) / 100;
		if (i == a*a*a + b*b*b + c*c*c)
		{
			printf("%4d", i);
			count++;
		}
	}
	if (count == 0)printf("no\n");
	system("pause");
	return 0;
}
