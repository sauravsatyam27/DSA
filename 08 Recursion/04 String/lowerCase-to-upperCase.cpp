#include<iostream>
using namespace std;

void L_to_U(string &str, int end){

    if(end < 0){
        return;
    }

    if(str[end] >= 'a' && str[end] <= 'z'){
        str[end] = str[end] - 'a' + 'A';
    }

    L_to_U(str, end-1);
}

int main(){

    string str = "stonecoldsteveaustin";

    L_to_U(str, str.size()-1);

    cout << "Uppercase: " << str;

    return 0;
}
