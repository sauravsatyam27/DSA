#include<iostream>
#include<vector>
using namespace std;

class Node {
  public :
      int data;
      Node* left;
      Node* right;

   Node(int val){
    data = val;
    left = right = NULL;
   }   
};

static int idx = -1;

Node* buildTree(vector<int>preOrder){

  idx++;
  
  if (preOrder[idx] == -1){ 
    return NULL;
  }
  Node *root = new Node(preOrder[idx]);  // Root
  root->left = buildTree(preOrder);
  root->right = buildTree(preOrder);     // right

  return root;
}



int main(){

  vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

  Node *root = buildTree(preorder);

  // preOrder(root);

  return 0;
}

