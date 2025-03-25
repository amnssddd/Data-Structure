#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* left;
	Node* right;
	int height;

	Node(int x) :data(x), left(NULL), right(NULL), height(1) {}
};

//��ȡ�ڵ�߶�
int getHeight(Node* node)
{
	if (node == NULL)
		return 0;
	return node->height;
}

//���½ڵ�߶�
void updateHeight(Node* node)
{
	if (node == NULL)
		return;
	node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
}

//����ƽ�����ӣ��������߶�-�������߶ȣ�
int getBalanceFactor(Node* node)
{
	if (node == NULL)
		return 0;
	return getHeight(node->left) - getHeight(node->right);
}

//����
Node* rightRotate(Node* y)
{
	Node* x = y->left;
	Node* T2 = x->right;

	//��ת
	x->right = y;
	y->left = T2;

	//���¸߶�
	updateHeight(y);
	updateHeight(x);

	return x;
}

//����
Node* leftRotate(Node* x)
{
	Node* y = x->right;
	Node* T2 = y->left;

	//��ת
	y->left = x;
	x->right = T2;

	//���¸߶�
	updateHeight(x);
	updateHeight(y);

	return y;
}

int main()
{
	return 0;
}