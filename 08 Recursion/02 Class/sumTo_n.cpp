#include<iostream>
using namespace std;

int sum(int n){
  
  if(n == 0){
    return 0;
  }

   return n + sum(n-1);


}

int main(){
  int n = 10;

  int total = sum(n);
   cout<<"The total Sum is : "<< total;

  return 0;
}