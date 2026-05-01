#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

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

Node* insert(Node* root, int val){

    if(root == nullptr){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insert(root->left , val);
    }
    else{
        root->right = insert(root->right , val);
    }

    return root;
}

Node* buildBST(vector<int> arr){

    Node* root = nullptr;

    for(int val : arr){
        root = insert(root , val);
    }

    return root;
}

int minDiff = INT_MAX;
Node* prevNode = nullptr;

void dfs(Node* root){

    if(root == nullptr){
        return;
    }

    dfs(root->left);

    if(prevNode != nullptr){
        minDiff = min(minDiff , root->data - prevNode->data);
    }

    prevNode = root;

    dfs(root->right);
}

int main(){

    vector<int> arr = {83,82,62,42,52,88};

    Node* root = buildBST(arr);

    dfs(root);

    cout << "Minimum Difference = " << minDiff;

    return 0;
}