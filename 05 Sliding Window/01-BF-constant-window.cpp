#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int>arr ={-2,5,2,6,-4,-7,2,4,5,6,-8};

  int k = 4;
  int n = arr.size();
  // int i = 0;

      if (k > n) {
        cout << "Window size is larger than array!";
        return 0;
    }
  int sum = 0;
  for(int i = 0; i<k; i++){
    sum += arr[i];

  }
    int maxSum = sum;

    for(int i = k; i<n-1;i++){
      sum = sum - arr[i-k] + arr[i];
    }

      maxSum = max(sum,maxSum);

    cout<<"Max sum is : "<< maxSum;
  return 0;
}