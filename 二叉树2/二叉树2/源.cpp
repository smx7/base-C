#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1 //���ܻ����˶���д����仰�����ʣ���Ϊʲô������仰�����������Ŀ���ȥ���ҵĲ���VS��ʾscanf����ȫ����

#include<stdio.h>
#include<stdlib.h>
typedef struct BiNode
{
	char data;
	struct BiNode *lchild;
	struct BiNode *rchild;

}BiNode, *BiTree;
int CreatBiTree(BiTree &T)
{
	int m;
	scanf("%d", &m);
	if (m == -1)
		T = NULL;
	else
	{
		T = (BiTree)malloc(sizeof(BiNode));
		T->data = m;
		printf("������%d������", m);
		CreatBiTree(T->lchild);
		printf("������%d���Һ���", m);
		CreatBiTree(T->rchild);
	}
	return 0;

}
void  PrintfBiTree1(BiTree T)
{
	if (T == NULL)
		return;

	printf("%d", T->data);
	PrintfBiTree1(T->lchild);
	PrintfBiTree1(T->rchild);

}
void  PrintfBiTree2(BiTree T)
{
	if (T == NULL)
		return;

	PrintfBiTree2(T->lchild);
	printf("%d", T->data);
	PrintfBiTree2(T->rchild);

}
void  PrintfBiTree3(BiTree T)
{
	if (T == NULL)
		return;

	PrintfBiTree3(T->lchild);
	PrintfBiTree3(T->rchild);
	printf("%d", T->data);

}

int main()
{
	BiTree T;
	BiTree *p = (BiTree*)malloc(sizeof(BiNode));
	printf("��������ڵ��ֵ�����κνڵ�Ϊ-1ʱ����Ϊ�սڵ�\n");
	CreatBiTree(T);
	printf("���������������Ϊ:");
	PrintfBiTree1(T);
	printf("\n");
	printf("���������������Ϊ:");
	PrintfBiTree2(T);
	printf("\n");
	printf("�������ĺ������Ϊ:");
	PrintfBiTree3(T);
	printf("\n");
	system("pause");

}
