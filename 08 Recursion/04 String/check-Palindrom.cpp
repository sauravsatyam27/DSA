#include<iostream>
using namespace std;

bool palindrom(string str, int start, int end){
  if(start >= end){
    return true;
  }

  if(str[start] != str[end]){
    return false;
  }

  return palindrom(str, start+1, end-1);

}

int main(){

  string str = "racecar";
  int start = 0;
  int end = str.size()-1;
    if(palindrom(str,start,end))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
  return 0;
}