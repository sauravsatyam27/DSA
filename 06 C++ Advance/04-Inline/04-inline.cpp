#include<iostream>
using namespace std;


 inline void sum(int x){
    x += 10;
    cout<<x;
  }
int main(){
  int a = 5;
  sum(a);
  return 0;
  
}
