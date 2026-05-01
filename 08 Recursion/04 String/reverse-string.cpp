#include<iostream>
using namespace std;

// int rev(string str, int end){
  
//   if(end == -1){
//     return -1;
//   }

//   return rev(str, end-1);

// }

void rev(string &str, int end, int start){
  
  if(start >= end){
    return;
  }

     swap(str[start], str[end]);


    rev(str, start+1, end-1);
 

}

int main(){

  string str = "saurav";

  int end = str.size()-1;
  int start = 0;
  //int result = rev(str, end);
  rev(str, end, start);

  cout<<"Reversed: -> " << str;

  return 0;

}