#include<iostream>
using namespace std;

void oneToN(int n ){
  // Base case
  if(n == 0){
    return;
  }
  cout<<"Mai hu value :"<<n<<endl;
  oneToN(n-1);

}
int main(){
  int n = 10;

  oneToN(n);
  return 0;
}