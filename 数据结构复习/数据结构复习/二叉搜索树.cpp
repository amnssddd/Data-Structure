/*
#include <iostream>
using namespace std;

using ElemType = int;
struct TNode {
	ElemType data;
	TNode* left;
	TNode* right;

	//构造函数
	TNode(int x):data(x),left(NULL),right(NULL){}
};
using BinTree = TNode*;

BinTree Find(BinTree BST, ElemType X)
{
	if (BST == NULL) return NULL;  //递归终止
	if (X < BST->data)
	{
		return Find(BST->left, X);   //在左子树中查找
	}
	else if (X > BST->data)
	{
		return Find(BST->right, X);  //在右子树中查找
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
	return NULL;  //查找失败
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
		BST = new TNode(X);   //创建一个值为e的节点
	}
	else
	{
		//递归插入
		if (X < BST->data)
		{
			BST->left = Insert(BST->left, X);
		}
		else if (X > BST->data)
		{
			BST->right = Insert(BST->right, X);
		}
		//若X已经存在，什么都不做
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
			BST->left = Delete(BST->left, X);  //左子树递归删除
		else if(X > BST->data)
			BST->right = Delete(BST->right, X);
		else
		{
			//进入该else后 BST就是要删除的节点
			if (BST->left && BST->right)  //如果该节点有左右子树
			{
				//从右子树中找最小的元素填充删除节点
				Tmp = FindMin(BST->right);
				BST->data = Tmp->data;
				//从右子树中删除最小元素
				BST->right = Delete(BST->right, BST->data);
			}
			else   //如果被删除节点有一个或无子节点
			{
				Tmp = BST;
				if (!BST->left)  //如果只有右孩子或无子节点
					BST = BST->right;
				else      //如果只有左孩子
					BST = BST->left;
				delete Tmp;  //释放内存
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