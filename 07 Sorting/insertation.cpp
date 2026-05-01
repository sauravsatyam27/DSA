#include<iostream>
using namespace std;

void insertationSort(int arr[], int n){
  for(int i =1; i<n;i++){
    int cur = arr[i];
    int j = i-1;
    while( j>=0 && arr[j] > cur){
      arr[j+1] = arr[j];
      j--;
    }
      arr[j + 1] = cur;
  }
}

int main(){
      int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertationSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}