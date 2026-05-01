#include<iostream>
using namespace std;

 int sum(int arr[], int n){

    if(n == -1){
      return 0;
    }
    return arr[n] + sum(arr, n-1);
    // cout<<"Sum is :"<< netSum;
  }
  

int main(){

  int arr[] ={1,2,3,4,5,6,7,8,9,10};
  int n = sizeof(arr)/sizeof(arr[0]);

  int result = sum(arr,n-1);
  
  cout<<"Sum is :"<< result;
  return 0;
}