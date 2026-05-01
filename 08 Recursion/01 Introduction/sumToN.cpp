#include<iostream>
using namespace std;

int add(int n){
    // Base case
    if(n == 0){
        return 0;
    }
    
    // Recursive case
    return n + add(n - 1);
}

int main(){
    int n = 10;
    int result = add(n);
    cout << "Sum is: " << result;
    return 0;
}
