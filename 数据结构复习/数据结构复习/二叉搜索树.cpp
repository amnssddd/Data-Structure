/*
#include <iostream>
using namespace std;

using ElemType = int;
struct TNode {
	ElemType data;
	TNode* left;
	TNode* right;

	//���캯��
	TNode(int x):data(x),left(NULL),right(NULL){}
};
using BinTree = TNode*;

BinTree Find(BinTree BST, ElemType X)
{
	if (BST == NULL) return NULL;  //�ݹ���ֹ
	if (X < BST->data)
	{
		return Find(BST->left, X);   //���������в���
	}
	else if (X > BST->data)
	{
		return Find(BST->right, X);  //���������в���
	}
	else return BST;
}

BinTree IterFind(BinTree BST, ElemType X)
{
	while (BST)
	{
		if (X < BST->data)
		{
			BST = BST->left;
		}
		else if (X > BST->data)
		{
			BST = BST->right;
		}
		else
		{
			return BST;
		}
	}
	return NULL;  //����ʧ��
}

BinTree FindMax(BinTree BST)
{
	if (BST == NULL)
		return NULL;
	else if (BST->right == NULL)
		return BST;
	else
		return FindMax(BST->right);
}

BinTree FindMin(BinTree BST)
{
	if (BST)
	{
		while (BST->left)
		{
			BST = BST->left;
		}
	}
	return BST;
}

BinTree Insert(BinTree BST, ElemType X)
{
	if (BST == NULL)
	{
		BST = new TNode(X);   //����һ��ֵΪe�Ľڵ�
	}
	else
	{
		//�ݹ����
		if (X < BST->data)
		{
			BST->left = Insert(BST->left, X);
		}
		else if (X > BST->data)
		{
			BST->right = Insert(BST->right, X);
		}
		//��X�Ѿ����ڣ�ʲô������
	}
	return BST;
}

BinTree Delete(BinTree BST, ElemType X)
{
	BinTree Tmp;
	if (!BST)
		cout << "Not Found!" << endl;
	else
	{
		if (X < BST->data)
			BST->left = Delete(BST->left, X);  //�������ݹ�ɾ��
		else if(X > BST->data)
			BST->right = Delete(BST->right, X);
		else
		{
			//�����else�� BST����Ҫɾ���Ľڵ�
			if (BST->left && BST->right)  //����ýڵ�����������
			{
				//��������������С��Ԫ�����ɾ���ڵ�
				Tmp = FindMin(BST->right);
				BST->data = Tmp->data;
				//����������ɾ����СԪ��
				BST->right = Delete(BST->right, BST->data);
			}
			else   //�����ɾ���ڵ���һ�������ӽڵ�
			{
				Tmp = BST;
				if (!BST->left)  //���ֻ���Һ��ӻ����ӽڵ�
					BST = BST->right;
				else      //���ֻ������
					BST = BST->left;
				delete Tmp;  //�ͷ��ڴ�
			}
		}
	}
	return BST;
}

int main()
{
	cout << endl;
	return 0;
}
*/