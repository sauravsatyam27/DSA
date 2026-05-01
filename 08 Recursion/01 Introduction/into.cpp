#include<iostream>
using namespace std;

void birthday(int n ){
  // Base case
    if( n == 0){
    cout<<"Happy Birthday";
    return;
  }
    cout<< n <<"Days left for birthday"<<endl;
    birthday(n-1);
}
int main(){
  int n = 5;

  birthday(n);
  return 0;
}