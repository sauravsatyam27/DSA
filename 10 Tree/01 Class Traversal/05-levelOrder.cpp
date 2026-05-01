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

void levelOrder(Node* root){
  queue <Node*>q;

  q.push(root);

  while(q.size() > 0){
    Node* curr = q.front();
    q.pop();

    cout<< curr-> data << " ";

    if(curr-> right != NULL){
      q.push(curr->left);
    }
  }
  cout<< endl;

}


int main(){

    vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node *root = builtTree(preorder);

    levelOrder(root);
    return 0;


}