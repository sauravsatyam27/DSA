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

int ans = 0;

int diameter(Node* root){

    if(root == nullptr){
        return 0;
    }

    int lHt = diameter(root->left);
    int rHt = diameter(root->right);

    ans = max(ans , lHt + rHt);

    return max(lHt , rHt) + 1;
}

int main(){

    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,-1};

    Node* root = buildTree(preorder);

    diameter(root);

    cout << "Diameter : " << ans << endl;

    return 0;
}