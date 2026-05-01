#include<iostream>
#include<vector>
#include<queue>

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

// Level order Traversal

int sumTree(Node* root){
  if(root == nullptr){
    return 0;
  }
   int leftSum = sumTree(root -> left);
   int rightSum = sumTree(root -> right);

   root -> data += leftSum + rightSum;

   return root->data;
}


int main(){

    vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node *root = builtTree(preorder);
    int x = sumTree(root);
    cout<< "The Sum Tree is : "<<x<<endl;
    return 0;


}