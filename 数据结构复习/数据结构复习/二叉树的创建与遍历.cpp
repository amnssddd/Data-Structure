/*
#include <iostream>
#include <queue>
using namespace std;

//定义二叉树节点类
typedef int BTDataType;
class BTNode {
public:
	BTDataType data;  //节点数据
	BTNode* left;     //左孩子节点指针
	BTNode* right;    //右孩子节点指针

	//构造函数，初始化节点
	BTNode(BTDataType x) : data(x), left(NULL), right(NULL) {}
};

//创建节点的函数
BTNode* BuyBTNode(BTDataType x) 
{
	BTNode* newnode = new BTNode(x);  //使用new动态分配内存
	if (newnode == NULL)  //如果new失败则退出
	{
		exit(-1);
	}
	return newnode;
}

//手动创建二叉树
BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyBTNode(1);
	BTNode* node2 = BuyBTNode(2);
	BTNode* node3 = BuyBTNode(3);
	BTNode* node4 = BuyBTNode(4);
	BTNode* node5 = BuyBTNode(5);
	BTNode* node6 = BuyBTNode(6);

	//构建二叉树结构
	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;

	return node1;  //返回根节点
}

//前序遍历创建二叉树
BTNode* BinaryTreeCreat(const char* a, int n, int& pi)
{
	if (pi >= n)
	{
		return NULL;
	}
	if (a[pi] == '#')
	{
		pi++;  //索引往后迭代
		return NULL;
	}

	//根据当前索引的字符创建父节点，索引迭代
	BTNode* root = new BTNode(a[pi++]);
	//递归创建左孩子节点
	root->left = BinaryTreeCreat(a, n, pi);
	//递归创建右孩子节点
	root->right = BinaryTreeCreat(a, n, pi);
	//返回创建的父节点
	return root;
}

//前序遍历
void PrevOrder(BTNode* root)
{
	if (root == NULL)  //递归终止条件
	{
		return;
	}
	cout << root->data << " ";   //输出根节点的值
	PrevOrder(root->left);       //递归遍历左子树
	PrevOrder(root->right);      //递归遍历右子树
}

//中序遍历
void InOrder(BTNode* root)
{
	if (root == NULL)  //递归终止条件
	{
		return;
	}
	InOrder(root->left);       //递归遍历左子树
	cout << root->data << " ";   //输出根节点的值
	InOrder(root->right);      //递归遍历右子树
}

//后续遍历
void PostOrder(BTNode* root)
{
	if (root == NULL)  //递归终止条件
	{
		return;
	}
	PostOrder(root->left);       //递归遍历左子树
	PostOrder(root->right);      //递归遍历右子树
	cout << root->data << " ";   //输出根节点的值
}

//层序遍历
void LevelOrder(BTNode* root)
{
	if (root == NULL)  //如果根节点为空直接返回
	{
		return;
	}
	queue<BTNode*> q;  //创建队列q存储二叉树节点指针
	q.push(root);      //根节点入队

	while (!q.empty())
	{
		int len = q.size();    //记录当前层的节点数量
		for (int i = 0;i < len;i++)  //遍历当前层所有节点
		{
			BTNode* front = q.front();  //取出队头节点
			q.pop();                    //删除队头节点
			cout << front->data << " "; //输出当前节点的值
		
			//将当前节点的左右子节点入队
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
	if (root == NULL)   //递归终止条件
	{
		return 0;
	}
	return 1 + TreeSize(root->left) + TreeSize(root->right);
}

int main() {
	// 创建二叉树
	BTNode* root1 = CreatBinaryTree();

	cout << "前序遍历：" << endl;
	PrevOrder(root1);
	cout << endl;
	cout << "中序遍历：" << endl;
	InOrder(root1);
	cout << endl;
	cout << "后序遍历：" << endl;
	PostOrder(root1);
	cout << endl;
	cout << "层序遍历：" << endl;
	LevelOrder(root1);

	const char* a = "ABD##E#H##CF##G##"; // 前序遍历数组
	int n = strlen(a); // 数组长度
	int pi = 0; // 索引初始化为 0

	// 创建二叉树
	BTNode* root = BinaryTreeCreat(a, n, pi);

	return 0;
}*/