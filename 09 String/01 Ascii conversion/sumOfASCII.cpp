#include<iostream>
using namespace std;

int main(){

    string str = "saurav";
    int sum = 0;
    
    for(int i = 0; i<str.size(); i++){
        sum += str[i] - '0';
    }
    
    cout<< sum;
    
    return 0;
}