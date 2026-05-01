#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int val) {
    if(root == nullptr)
        return new Node(val);

    if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

Node* buildBST(vector<int> arr) {

    Node* root = nullptr;

    for(int val : arr)
        root = insert(root, val);

    return root;
}

void inorder(Node* root, vector<int>&arr){
  if(root == nullptr){
    return;
  }

  inorder(root->left,arr);
  arr.push_back(root->data);
  inorder(root->right, arr);

}

vector<int> mergeArray(vector<int>&a, vector<int>&b){
  vector<int>ans;
  int i = 0; 
  int j =0;
  while(i < a.size() && j < b.size()){
      if(a[i] < b[j]){
        ans.push_back(a[i++]);
      }
      else{
        ans.push_back(b[j++]);
      }
  }

  while(i < a.size()){
    ans.push_back(a[i++]);
  }
  while(j < b.size()){
    ans.push_back(b[j++]);
  }

  return ans;
}


vector<int> mergeBST(Node* root1, Node* root2) {

  vector<int>a,b;

  inorder(root1,a);
  inorder(root2,b);

  return mergeArray(a,b);
}

int main() {

    vector<int> arr1 = {5,3,7,2,4};
    vector<int> arr2 = {6,1,8};

    Node* root1 = buildBST(arr1);
    Node* root2 = buildBST(arr2);

    vector<int> result = mergeBST(root1, root2);

    cout << "Merged BST elements: ";

    for(int x : result)
        cout << x << " ";

    return 0;
}