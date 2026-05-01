#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

Node* tree(vector<int> arr, int start, int end){

    if(start > end){
        return nullptr;
    }

    int mid = start + (end-start)/2;

    Node* root = new Node(arr[mid]);

    root->left = tree(arr, start, mid-1);
    root->right = tree(arr, mid+1, end);

    return root;
}

void inorder(Node* root){

    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){

    vector<int> arr = {-10,-3,0,5,9};

    Node* root = tree(arr,0,arr.size()-1);

    inorder(root);

    return 0;
}