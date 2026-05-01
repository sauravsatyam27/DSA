#include<iostream>
#include<vector>
#include<queue>
#include<string>

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

 void allPath(Node* root, string path, vector<string>& ans){
      
      if(root->left == nullptr && root->right == nullptr){
          ans.push_back(path);
          return;
      }
      
      if(root->left){
          allPath(root->left, path + "->" + to_string(root->left->data), ans);
      }
      
      if(root->right){
          allPath(root->right, path + "->" + to_string(root->right->data), ans);
      }
  }
  
    vector<string> Paths(Node* root) {
        
        string path = to_string(root->data);
        vector<string> ans;
        
        allPath(root, path, ans);
        
        return ans;
    }


int main(){

    vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node *root = builtTree(preorder);

    //cout<< "The Sum Tree is : "<<<<endl;
    return 0;


}