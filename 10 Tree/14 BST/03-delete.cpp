#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

Node *insert(Node *root, int val)
{

    if (root == nullptr)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }

    return root;
}

Node *buildBST(vector<int> arr)
{

    Node *root = nullptr;

    for (int val : arr)
    {
        root = insert(root, val);
    }

    return root;
}

void inorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " " << endl;
    inorder(root->right);
}
Node *inorderSuccessor(Node *root)
{
    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

Node *deleteNode(Node *root, int key)
{

    if (root == nullptr)
    {
        return nullptr;
    }

    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }

    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }

    else
    {

        // case 1 & 2
        if (root->left == nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        if (root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // case 3 (two children)
        Node *succ = inorderSuccessor(root->right);
        root->data = succ->data;
        root->right = deleteNode(root->right, succ->data);
    }

    return root;
}

int main()
{

    vector<int> arr = {3, 2, 1, 5, 6, 7};

    int val = 7;

    Node *root = buildBST(arr);

    inorder(root);

    cout << endl;

    root = deleteNode(root, 5);

    return 0;
}
