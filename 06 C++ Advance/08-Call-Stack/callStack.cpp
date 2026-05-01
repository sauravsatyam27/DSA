#include<iostream>
using namespace std;

int add(int a, int b){
  return a+b;
}

int sub(int a, int b){
  return a-b;
}

void display(int (*fp)(int,int)){
    int x=  (*fp)(6,2);
    cout << "Result = " << x << endl;
}

int main(){
    display(&add);
    display(&sub);
  return 0;
}