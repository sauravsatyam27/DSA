#include<iostream>
#include<vector>

using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val = data;
        left = right = NULL;
    }
};

int idx = -1;

// Build tree from preorder
Node* buildTree(vector<int> &preorder){

    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);

    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

int height(Node*root){
  if(root == nullptr){
    return 0;
  }

  int lHt = height(root->left);
  int rHt = height(root->right);

  return max(lHt, rHt) +1;
}
// Info class for diameter + height
int diameter(Node *root){
  if(root == nullptr){
    return 0;
  }

  int leftDia = diameter(root->left);
  int rightDia = diameter(root->right);
  int currentDia = height(root->left) + height(root->right);
  return max(currentDia , max(leftDia , rightDia));
  
}



int main(){

    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,-1};

    Node* root = buildTree(preorder);

    cout << "Diameter : " << diameter(root) << endl;

    return 0;
}