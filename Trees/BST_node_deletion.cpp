#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

class BST
{
public:
	Node *Insert(Node *root, int data)
	{
		// cout << "InsertCalled";
		if (root == NULL)
		{
			root = new Node;
			root->data = data;
			root->left = root->right = NULL;
		}
		else if (data <= root->data)
		{
			root->left = Insert(root->left, data);
		}
		else
		{
			root->right = Insert(root->right, data);
		}
		return root;
	}
	void preorder(Node *root)
	{
		if (root == NULL)
			return;
		cout << "\t" << root->data;
		preorder(root->left);
		preorder(root->right);
	}
	// void inorder(Node *root)
	// {
	//     if (root == NULL)
	//         return;
	//     preorder(root->left);
	//     cout << "\t" << root->data;
	//     preorder(root->right);
	// }
	// void postorder(Node *root)
	// {
	//     if (root == NULL)
	//         return;
	//     preorder(root->left);
	//     preorder(root->right);
	//     cout << "\t" << root->data;
	// }
	Node *LargestNode(Node *tree)
	{
		if ((tree == NULL) || (tree->right == NULL))

			return tree;
		else

			return LargestNode(tree->right);
	}

	void Delete(Node *tree, int val)
	{
		Node *Temp = new Node;
		if (tree == NULL)
			cout << "\nValue not found in the tree.\n";
		else if (val < tree->data)
			Delete(tree->left, val);
		else if (val > tree->data)
			Delete(tree->right, val);
		else if (tree->left && tree->right)
		{
			Temp = LargestNode(tree->left);
			tree->data = Temp->data;
			Delete(tree->left, Temp->data);
		}
		else
		{
			Temp = tree;
			if (tree->left == NULL && tree->right == NULL)
				tree = NULL;
			else if (tree->left != NULL)
			{
				tree = tree->left;
			}
			else
			{
				tree = tree->right;
			}
		}
		delete Temp;
	}
};

int main()
{
	Node *root = NULL;
	BST bst;
	int i, data, size;
	cout << "Enter Size of the tree: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> data;
		root = bst.Insert(root, data);
	}
	cout<<"\n";
	bst.preorder(root);
	cout<<"\nenter data to be deleted";
	cin>>data;
	bst.Delete(root, data);
	cout<<"\n";
	bst.preorder(root);
	cout<<"\n";
	return 0;
}
