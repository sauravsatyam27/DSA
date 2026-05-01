#include<iostream>
#include<vector>
using namespace std;

void BinarySearch(vector<int> &arr, int key, int start , int end){

    // ✅ Base Case
    if(start > end){
        cout << "Element not Found";
        return;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key){
        cout << "Element found at index: " << mid;
        return;
    }

    else if(arr[mid] > key){
        BinarySearch(arr, key, start , mid-1);
    }

    else{
        BinarySearch(arr, key, mid+1 , end);
    }
}

int main(){
  
    vector<int> arr = {1,2,3,5,6,8,9};
    int key = 2;

    BinarySearch(arr, key, 0 , arr.size()-1);

    return 0;
}
