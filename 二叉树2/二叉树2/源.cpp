#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1 //可能会有人对我写的这句话有疑问，问为什么会有这句话，如果有问题的可以去看我的博客VS提示scanf不安全问题

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
		printf("请输入%d的左孩子", m);
		CreatBiTree(T->lchild);
		printf("请输入%d的右孩子", m);
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
	printf("请输入根节点的值，当任何节点为-1时代表为空节点\n");
	CreatBiTree(T);
	printf("二叉树的先序遍历为:");
	PrintfBiTree1(T);
	printf("\n");
	printf("二叉树的中序遍历为:");
	PrintfBiTree2(T);
	printf("\n");
	printf("二叉树的后序遍历为:");
	PrintfBiTree3(T);
	printf("\n");
	system("pause");

}
