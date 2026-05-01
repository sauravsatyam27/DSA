#include<iostream>
using namespace std;
#include<string>
#include<map>


int main(){

  std::map<int,string>map ={
  {101,"saurav"},
  {102,"satyam"},
  {103,"sam"},
};

map.insert({3,"rahul"});
map.insert({1, "Apple"});
map.insert(std::make_pair(2,"Banana"));

map.emplace(4,"virat");


    for (auto it : map) {
        cout << it.first << " -> " << it.second << endl;
    }
return 0;
}

