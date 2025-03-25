/*
#include<iostream>
using namespace std;

class BTNode
{
public:
	char data;
	BTNode* left;
	BTNode* right;

	BTNode(char x): data(x), left(NULL), right(NULL){}
};

//创建二叉树
BTNode* TreeCreate(const char* a, int n, int& pi)
{
	if (pi >= n)
	{
		return NULL;
	}
	if (a[pi] == '#')
	{
		pi++;
		return NULL;
	}
	BTNode* root = new BTNode(a[pi]);
	pi++;
	root->left = TreeCreate(a, n, pi);   //递归创建左孩子节点
	root->right = TreeCreate(a, n, pi);  //递归创建右孩子节点
	return root;  //返回头指针
}

//前序遍历
BTNode* prevOrder(BTNode* root)
{
	if (root == NULL)
	{
		return NULL;
	}
	cout << root->data << " ";
	prevOrder(root->left);
	prevOrder(root->right);
}

//树节点个数
int TreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return 1 + TreeSize(root->left) + TreeSize(root->right);
}

//第k行节点的个数
int TreeKLevelSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return TreeKLevelSize(root->left, k - 1) + TreeKLevelSize(root->right, k - 1);
}

//二叉树高度
int TreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int leftHeight = TreeHeight(root->left);
	int rightHeight = TreeHeight(root->right);
	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}

//查找二叉树中值为x的节点
BTNode* TreeFind(BTNode* root, char x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	//去root的左右孩子节点找
	BTNode* leftNode = TreeFind(root->left, x);
	if (leftNode) return leftNode;
	BTNode* rightNode = TreeFind(root->right, x);
	if (rightNode) return rightNode;
}

int main()
{
	const char* a = "ABD##E#H##CF##G##";
	int n = strlen(a);
	int pi = 0;
	BTNode* root = TreeCreate(a, n, pi);
	cout << "前序遍历:" << endl;
	prevOrder(root);
	cout << endl;
	int treeSize = TreeSize(root);
	cout << "二叉树的节点个数为：" << treeSize << endl;
	int treeHeight = TreeHeight(root);
	cout << "二叉树的高度为：" << treeHeight << endl;
	int treeKLevelSize = TreeKLevelSize(root, 3);
	cout << "二叉树第3行的节点个数为：" << treeKLevelSize<<endl;
	return 0;
}
*/
/*二叉树结构如下所示
	  A
	 / \
	B   C
   / \ / \
  D  E F  G
	 \
	  H
*/