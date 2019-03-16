#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[14] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
	int m, n;
	int i = 0;
	m = 6, n = 6;
	for (i = 0; i < sizeof(arr)/sizeof(arr[0])-1; i++)
	{
		if (i < 7)
		{
			arr[m] = '*';
			arr[n] = '*';
			m++;
			n--;
			printf("%s\n", arr);
		}
		else
		{
			m--;
			n++;
			arr[m] = ' ';
			arr[n] = ' ';
			printf("%s\n", arr);
		}
	}
	system("pause");
	return 0;
}
