// 05-functionOverloading.cpp
#include<iostream>
using namespace std;
void area(int a){
  int x = a*a;
  cout<<"Square area: "<<x<<endl;
}
void area(int a,int b){
  int x = a*b;
  cout<<"Rectngle area: "<<x<<endl;

}
void area(double  a){
  int x = 3.14*a;
  cout<<"Square area: "<<x<<endl;

}
int main(){
  area(5);
  area(5,4);
  area(5);

}