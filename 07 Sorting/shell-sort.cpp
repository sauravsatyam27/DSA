#include<iostream>
using namespace std;


void shellSort(int arr[], int n){
  for(int gap = n/2; gap>0; gap = gap/2){
    for(int i = gap; i<n; i++){
      int temp = arr[i];
      int j;

      for(j=i; j>=gap && arr[j-gap] >temp; j=j-gap){
        arr[j] = arr[j-gap];
      }
      arr[j] = temp;
    }
  }
}

int main(){
      int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    shellSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}