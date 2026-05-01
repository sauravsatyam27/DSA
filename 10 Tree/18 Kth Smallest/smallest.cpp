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

int countNodes = 0;

int kthSmallest(Node *root, int k)
{
    if (root == nullptr)
        return -1;

    int left = kthSmallest(root->left, k);
    if (left != -1)
        return left;

    countNodes++;
    if (countNodes == k)
        return root->data;

    return kthSmallest(root->right, k);
}

int main()
{
    vector<int> arr = {83, 82, 62, 42, 52, 88};

    Node *root = buildBST(arr);

    int x = kthSmallest(root, 2);

    cout << "Kth Smallest: " << x;

    return 0;
}