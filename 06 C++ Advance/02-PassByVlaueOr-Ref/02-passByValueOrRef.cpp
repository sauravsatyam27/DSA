#include<iostream>
using namespace std;

// Pass By value
void addTen(int x){
  x = x + 10;
  cout<<"Inside function Value: x = "<<x<<endl;
}

// Pass By Reference

void addTwenty(int &y){
    y = y + 20;
    cout<<"Inside function Ref: x = "<<y<<endl;

}

int main(){

  int num= 10;
  int two = 20;
  addTwenty(two);
  addTen(10);
  cout<<"Outside function Ref: x = "<<two<< " "<<endl;
  cout<<"Outside function: x = "<<num<< " ";
  return 0;


}