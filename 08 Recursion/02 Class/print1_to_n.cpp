#include <iostream>
using namespace std;

int num(int n, int x){
  if(n == x){
    return 0;
  }
  cout<< n <<endl;
  num(n + 1, x);
}

int main(){

    int n = 1;
    int x = 10;
    int result = num(n,x);
   
    return 0;
}