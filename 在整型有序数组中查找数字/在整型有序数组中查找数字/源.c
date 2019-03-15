#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int left=0;
	int right=sizeof(arr)/sizeof(arr[0])-1;
	int mid=0;
	int key;
	printf("请输入要找的数字\n");
	scanf("%d", &key);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
	{
		printf("找到了，下标为%d\n", mid);
	}
	else
		printf("找不到\n");
	system("pause");
	return 0;
}


