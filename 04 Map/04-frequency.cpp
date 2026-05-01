#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

int main(){

vector<int> arr = {1,2,2,3,3,3};  
map<int, int> freq;

for(int x :arr){
  freq[x]++;
}

for (auto it = freq.begin(); it != freq.end(); it++) {
    cout << "key " << it->first << " count " << it->second << endl;
}


return 0;
}