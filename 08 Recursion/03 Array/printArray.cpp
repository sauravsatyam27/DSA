#include<iostream>
using namespace std;


// Method 1 😈

// void printArr(int arr[], int start, int size){
//   if(start == size){
//     return;
//   }
//   cout<<arr[start]<<" " << endl;
//   printArr(arr, start+1,size);
// }

// void printArrReverse(int arr[], int start, int size){
//   if(start == size){
//     return;
//   }
//   cout<<arr[size-1]<<" ";
//   printArrReverse(arr, start,size-1);
// }


// Method 2 😒🍭

void printArr(int arr[], int size){
    if(size == -1){
      return;
    }
    printArr(arr,size-1);
     cout<<arr[size]<<" " << endl;
}

void printArrReverse(int arr[], int size){
  if(size == -1){
    return;
  }
     cout<<arr[size]<<" " << endl;
     printArrReverse(arr,size-1);
}

int main(){

  int arr[] ={1,2,3,4,5,6,7,8,9,10};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  int start = 0;


    // printArr(arr,start,size);
    // printArrReverse(arr,start,size);

    printArr(arr,size-1);
    printArrReverse(arr,size-1);

  return 0;
}