#include<iostream>
#include<vector>
using namespace std;

class Node {
  public: 
    int val;
    Node *left;
    Node *right;

    Node(int data){
      val = data;
      left = right = NULL;
    }

};

static int idx = -1;

 Node *builtTree(vector<int>preOrder){
  
    idx++;
    
    if (preOrder[idx] == -1){ 
      return NULL;
    }

    Node *root = new Node(preOrder[idx]);
    root -> left = builtTree(preOrder);
    root -> right = builtTree(preOrder);

    return root;

  }

int sumOfNodes(Node*root){
  if(root == NULL){
    return 0;
  }

    int leftHt = sumOfNodes(root->left);
    int rightHt = sumOfNodes(root->right);
    
    return leftHt + rightHt + root->val;
}

int main(){

    vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node *root = builtTree(preorder);

    cout<< "Height :" << sumOfNodes(root)<<endl;

    return 0;


}