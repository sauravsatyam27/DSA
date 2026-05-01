#include<iostream>
#include<vector>

using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

   Node(int val){
    
    data = val;
    left = right = nullptr;
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

// post order
void postOrder(Node *root){
  if(root == nullptr){
    return;
  }

  postOrder(root->left);
  postOrder(root->right);
  cout<< root->data<<" ";
}


int main(){

    vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node *root = builtTree(preorder);

    postOrder(root);
    return 0;


}