#include<iostream>
using namespace std;

int even(int n){
  if(n == 0){
    return 0;
  }
    even(n - 2);
    cout<< n << endl;
  
}

int main(){
      int n = 20;
      even(n);
    return 0;
}
