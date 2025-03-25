/*
#include <iostream>
#include <queue>
using namespace std;

//����������ڵ���
typedef int BTDataType;
class BTNode {
public:
	BTDataType data;  //�ڵ�����
	BTNode* left;     //���ӽڵ�ָ��
	BTNode* right;    //�Һ��ӽڵ�ָ��

	//���캯������ʼ���ڵ�
	BTNode(BTDataType x) : data(x), left(NULL), right(NULL) {}
};

//�����ڵ�ĺ���
BTNode* BuyBTNode(BTDataType x) 
{
	BTNode* newnode = new BTNode(x);  //ʹ��new��̬�����ڴ�
	if (newnode == NULL)  //���newʧ�����˳�
	{
		exit(-1);
	}
	return newnode;
}

//�ֶ�����������
BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyBTNode(1);
	BTNode* node2 = BuyBTNode(2);
	BTNode* node3 = BuyBTNode(3);
	BTNode* node4 = BuyBTNode(4);
	BTNode* node5 = BuyBTNode(5);
	BTNode* node6 = BuyBTNode(6);

	//�����������ṹ
	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;

	return node1;  //���ظ��ڵ�
}

//ǰ���������������
BTNode* BinaryTreeCreat(const char* a, int n, int& pi)
{
	if (pi >= n)
	{
		return NULL;
	}
	if (a[pi] == '#')
	{
		pi++;  //�����������
		return NULL;
	}

	//���ݵ�ǰ�������ַ��������ڵ㣬��������
	BTNode* root = new BTNode(a[pi++]);
	//�ݹ鴴�����ӽڵ�
	root->left = BinaryTreeCreat(a, n, pi);
	//�ݹ鴴���Һ��ӽڵ�
	root->right = BinaryTreeCreat(a, n, pi);
	//���ش����ĸ��ڵ�
	return root;
}

//ǰ�����
void PrevOrder(BTNode* root)
{
	if (root == NULL)  //�ݹ���ֹ����
	{
		return;
	}
	cout << root->data << " ";   //������ڵ��ֵ
	PrevOrder(root->left);       //�ݹ����������
	PrevOrder(root->right);      //�ݹ����������
}

//�������
void InOrder(BTNode* root)
{
	if (root == NULL)  //�ݹ���ֹ����
	{
		return;
	}
	InOrder(root->left);       //�ݹ����������
	cout << root->data << " ";   //������ڵ��ֵ
	InOrder(root->right);      //�ݹ����������
}

//��������
void PostOrder(BTNode* root)
{
	if (root == NULL)  //�ݹ���ֹ����
	{
		return;
	}
	PostOrder(root->left);       //�ݹ����������
	PostOrder(root->right);      //�ݹ����������
	cout << root->data << " ";   //������ڵ��ֵ
}

//�������
void LevelOrder(BTNode* root)
{
	if (root == NULL)  //������ڵ�Ϊ��ֱ�ӷ���
	{
		return;
	}
	queue<BTNode*> q;  //��������q�洢�������ڵ�ָ��
	q.push(root);      //���ڵ����

	while (!q.empty())
	{
		int len = q.size();    //��¼��ǰ��Ľڵ�����
		for (int i = 0;i < len;i++)  //������ǰ�����нڵ�
		{
			BTNode* front = q.front();  //ȡ����ͷ�ڵ�
			q.pop();                    //ɾ����ͷ�ڵ�
			cout << front->data << " "; //�����ǰ�ڵ��ֵ
		
			//����ǰ�ڵ�������ӽڵ����
			if (front->left != NULL)
			{
				q.push(front->left);
			}
			if (front->right != NULL)
			{
				q.push(front->right);
			}
		}
		cout << endl;
	}
}

int TreeSize(BTNode* root)
{
	if (root == NULL)   //�ݹ���ֹ����
	{
		return 0;
	}
	return 1 + TreeSize(root->left) + TreeSize(root->right);
}

int main() {
	// ����������
	BTNode* root1 = CreatBinaryTree();

	cout << "ǰ�������" << endl;
	PrevOrder(root1);
	cout << endl;
	cout << "���������" << endl;
	InOrder(root1);
	cout << endl;
	cout << "���������" << endl;
	PostOrder(root1);
	cout << endl;
	cout << "���������" << endl;
	LevelOrder(root1);

	const char* a = "ABD##E#H##CF##G##"; // ǰ���������
	int n = strlen(a); // ���鳤��
	int pi = 0; // ������ʼ��Ϊ 0

	// ����������
	BTNode* root = BinaryTreeCreat(a, n, pi);

	return 0;
}*/