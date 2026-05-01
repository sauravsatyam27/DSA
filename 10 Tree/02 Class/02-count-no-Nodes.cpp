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

int count(Node*root){
  if(root == NULL){
    return 0;
  }

    int leftHt = count(root->left);
    int rightHt = count(root->right);
    
    return leftHt + rightHt + 1;
}

int main(){

    vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node *root = builtTree(preorder);

    cout<< "Height :" << count(root)<<endl;

    return 0;

}