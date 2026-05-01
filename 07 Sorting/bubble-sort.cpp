#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
  for(int i =0;i<n-1;i++){
    bool swaped = false;
    for(int j =0; j<n-1-i; j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
        swaped = true;
       }
    }
    if(!swaped){
      break;
    }
  }
}
int main(){
      int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}