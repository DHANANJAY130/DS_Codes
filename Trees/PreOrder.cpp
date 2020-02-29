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
        cout << "InsertCalled";
        if (root == NULL)
        {
           root=new Node;
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
    void inorder(Node *root)
    {
        if (root == NULL)
            return;
        preorder(root->left);
        cout << "\t" << root->data;
        preorder(root->right);
    }
    void postorder(Node *root)
    {
        if (root == NULL)
            return;
        preorder(root->left);
        preorder(root->right);
        cout << "\t" << root->data;
    }
};

int main()
{
    Node *root = NULL;
    BST bst;
    int data, i, size;
    cout << "Enter Size of the Tree: ";
    cin >> size;
    // cout<<"Size liya kya";
    for (int i = 0; i < size; i++)
    {
        cin >> data;
        cout<<"input done";
        root = bst.Insert(root, data);
        cout<<"Traversing..";
    }
    cout << "\nPreorder is: ";
    bst.preorder(root);
    cout << "\nInorder is: ";
    bst.inorder(root);
    cout << "\nPostorder is: ";
    bst.postorder(root);
    return 0;
}
