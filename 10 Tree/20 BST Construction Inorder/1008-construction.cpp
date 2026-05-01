#include <iostream>
#include <vector>
#include <climits>

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

Node* preorder(vector<int> arr, int &i, int bound)
{
    if(i >= arr.size() || arr[i] > bound)
        return nullptr;

    Node* root = new Node(arr[i++]);

    root->left = preorder(arr, i, root->data);
    root->right = preorder(arr, i, bound);

    return root;
}

int main()
{
    vector<int> arr = {6,3,1,4,8,9};

    int i = 0;

    Node* root = preorder(arr, i, INT_MAX);

    return 0;
}