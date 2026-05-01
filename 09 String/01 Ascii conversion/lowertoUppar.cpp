#include<iostream>
using namespace std;

int main(){

    string str = "saurav";
    string ans = "";
    
    
    for(int i = 0; i<str.size(); i++){
        char c = str[i] - 32;
        ans += c;
    }
    
    cout<< ans;
    
    return 0;
}