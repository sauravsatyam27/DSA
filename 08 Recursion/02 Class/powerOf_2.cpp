#include<iostream>
using namespace std;

int pow(int x, int y){
  if( y == 0){
    return 1;
  }

  return x * pow(x,y-1);
}

int main(){

  int total =  pow(3,3);

   cout<<"The total Sum is : "<< total;

  return 0;

}