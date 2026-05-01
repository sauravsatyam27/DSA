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


Node* lca(Node* root, int p, int q){
  if(root == nullptr){
    return nullptr;
  }

  if(root->data > p && root->data > q){
    return lca(root->left,p,q);
  }

  else if(p > root->data && q > root->data){
   return lca(root->right, p, q);
  }
  else{
    return root;
  }
}

int main()
{
    vector<int> arr = {83, 82, 62, 42, 52, 88};

    Node *root = buildBST(arr);

    //int x = kthSmallest(root, 2);


   cout << "LCS: " << lca(root,42,52)
;

    return 0;
}