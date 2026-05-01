#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
  for(int i = 0; i<n-1; i++){
    int minIndex = i;
    for(int j = i + 1; j < n; j++)
{
      if(arr[j]<arr[minIndex]){
        minIndex = j;

      }
    }

    if(i != minIndex){
      swap(arr[i], arr[minIndex]);
    }
  }
}


int main(){
      int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}