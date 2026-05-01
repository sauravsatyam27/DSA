// Given an array of positive integers and an integer k, find the length of the longest contiguous subarray whose sum is less than or equal to k.


#include<iostream>
#include<vector>
using namespace std;
#include <algorithm>

int main(){

  vector<int>arr ={2,5,1,1,4,7,2,4,5,6,8};
  int n = arr.size();
  int k = 14;
  int l = 0;
  int r = 0;

  int sum = 0; 
  int maxLen = 0;

  while(r<n){
    sum += arr[r];

    while(sum>k){
      sum = sum - arr[l];
      l++;
    }

    if(sum <= k)
{      maxLen = max(maxLen, r-l+1);
}      r++;
  }

cout<<"Longest Subarray is : "<< maxLen;

  
return 0;

}