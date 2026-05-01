#include<iostream>
using namespace std;

int add(int a, int b){
  int c= a+b;
  cout<<"Value at c : "<< c;
}
int main(){

  int (*fp)(int,int);
  fp = add;
  fp(4,6);

  return 0;

}