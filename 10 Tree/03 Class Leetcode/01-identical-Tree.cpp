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

// Check identical trees
bool isIdentical(Node* root1 , Node* root2){

  if(root1 == nullptr || root2 == nullptr){
    return root1 == root2;
  }

  if(root1->val != root2->val){
       return false;
   }

  bool isLeftSame  =  isIdentical(root1 -> left, root2-> left);
  bool isRightSame =  isIdentical(root1 -> right, root2-> right);

}

int main(){

    vector<int> preorder1 = {1,2,-1,-1,3,-1,-1};
    vector<int> preorder2 = {1,2,-1,-1,3,-1,-1};

    idx = -1;
    Node* root1 = buildTree(preorder1);

    idx = -1;
    Node* root2 = buildTree(preorder2);

    if(isIdentical(root1 , root2)){
        cout << "Trees are Identical" << endl;
    }
    else{
        cout << "Trees are NOT Identical" << endl;
    }

    return 0;
}