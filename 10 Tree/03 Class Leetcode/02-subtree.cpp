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

  bool isLeftSame = isIdentical(root1 ->left, root2->left);
  bool isRightSame = isIdentical(root1 ->right, root2->right);

  return isLeftSame && isRightSame && root1->val == root2->val;

}

bool isSubtree(Node* root1, Node* subRoot){
  
if(root1 == nullptr && subRoot == nullptr){
    return true;
}

if(root1 == nullptr || subRoot == nullptr){
    return false;
}


  if(root1 -> val == subRoot -> val && isIdentical(root1, subRoot)){
    return true;
  }

  return isSubtree(root1->left, subRoot) || isSubtree(root1->right, subRoot);
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