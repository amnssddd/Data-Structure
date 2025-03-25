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

//����������
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
	root->left = TreeCreate(a, n, pi);   //�ݹ鴴�����ӽڵ�
	root->right = TreeCreate(a, n, pi);  //�ݹ鴴���Һ��ӽڵ�
	return root;  //����ͷָ��
}

//ǰ�����
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

//���ڵ����
int TreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return 1 + TreeSize(root->left) + TreeSize(root->right);
}

//��k�нڵ�ĸ���
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

//�������߶�
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

//���Ҷ�������ֵΪx�Ľڵ�
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
	//ȥroot�����Һ��ӽڵ���
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
	cout << "ǰ�����:" << endl;
	prevOrder(root);
	cout << endl;
	int treeSize = TreeSize(root);
	cout << "�������Ľڵ����Ϊ��" << treeSize << endl;
	int treeHeight = TreeHeight(root);
	cout << "�������ĸ߶�Ϊ��" << treeHeight << endl;
	int treeKLevelSize = TreeKLevelSize(root, 3);
	cout << "��������3�еĽڵ����Ϊ��" << treeKLevelSize<<endl;
	return 0;
}
*/
/*�������ṹ������ʾ
	  A
	 / \
	B   C
   / \ / \
  D  E F  G
	 \
	  H
*/