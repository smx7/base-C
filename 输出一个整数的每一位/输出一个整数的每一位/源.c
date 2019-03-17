#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int input, n;
	printf("ÊäÈëÕûÊý\n");
	scanf("%d", &input);
	while (input > 9)
	{
		switch (input % 10)
		{
		case 1:
			n = 1;
			break;
		case 2:
			n = 2;
			break;
		case 3:
			n = 3;
			break;
		case 4:
			n = 4;
			break;
		case 5:
			n = 5;
			break;
		case 6:
			n = 6;
			break;
		case 7:
			n = 7;
			break;
		case 8:
			n = 8;
			break;
		case 9:
			n = 9;
			break;
		case 0:
			n = 0;
			break;
		default:printf("error\n");
		}
		printf("%d\n", n);
		input = input / 10;
	}
	printf("%d\n", input);
	system("pause");
	return 0;
}
