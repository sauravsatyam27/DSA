#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

   std::map<int,string>st ={
  {101,"saurav"},
  {102,"satyam"},
  {103,"sam"},
};

cout << st[101];
  return 0;
}