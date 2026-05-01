#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
  std::map<int, std::string> fruits = {
    {1, "Apple"},
     {2, "Banana"},
      {3, "Cherry"}
  };

  for(auto it= fruits.begin(); it != fruits.end(); it++){
    cout<< "key "<< it->first<< " "<<"value "<<it->second<<endl;
  }
  return 0;
}