#include<iostream>
using namespace std;
#include<vector>



int vowelCount(string str, int end){

  if(end < 0){
    return 0;
  }


  if(str[end] == 'a' || str[end] == 'e' || str[end] == 'i' || str[end] == 'o' || str[end] == 'u'){
    return 1 + vowelCount(str, end-1);
  }
  else{
    return vowelCount(str, end-1);
  }
}

int main(){

  string str = "stonecoldsteveaustin";
  int start = 0;
  int end = str.size()-1;

  int result = vowelCount(str, end);
  cout << "Total vowels: " << result;

  return 0;

}