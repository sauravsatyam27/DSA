#include<iostream>
#include<vector>
using namespace std;

void linearSearch(vector<int>arr, int key, int i){

    if(i < 0){
     cout << "Element not found";
      return ;
    }
    
    if(arr[i] == key){
       cout << "Element found at index: " << i;
       return;
    }

    linearSearch(arr, key,i-1);

}


int main(){
  
  vector<int>arr = {4,3,2,6,9,21};
  int key = 9;

  linearSearch(arr, key, arr.size()-1);

  return 0;
}