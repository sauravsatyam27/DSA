#include <iostream>
#include <vector>

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

    if(root == nullptr)
        return new Node(val);

    if(val < root->data)
        root->left = insert(root->left,val);
    else
        root->right = insert(root->right,val);

    return root;
}

Node* buildBST(vector<int> arr){

    Node* root = nullptr;

    for(int val : arr)
        root = insert(root,val);

    return root;
}

void inorder(Node* root){

    if(root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

////////////////////////////////////////////////////////////

Node* prev = nullptr;
Node* first = nullptr;
Node* second = nullptr;

Node* prevNode = nullptr;
Node* first = nullptr;
Node* second = nullptr;

void recoverBST(Node* root){

    if(root == nullptr)
        return;

    recoverBST(root->left);

    if(prevNode != nullptr && root->data < prevNode->data){

        if(first == nullptr)
            first = prevNode;

        second = root;
    }

    prevNode = root;

    recoverBST(root->right);
}

////////////////////////////////////////////////////////////

int main(){

    vector<int> arr = {6,3,8,1,4,7,9};

    Node* root = buildBST(arr);

    cout << "Original BST (Inorder): ";
    inorder(root);
    cout << endl;

    // Swap two nodes to simulate error
    swap(root->left->data , root->right->data);

    cout << "After Swapping: ";
    inorder(root);
    cout << endl;

    recoverBST(root);

    if(first && second)
        swap(first->data, second->data);

    cout << "After Recovering BST: ";
    inorder(root);

    return 0;
}