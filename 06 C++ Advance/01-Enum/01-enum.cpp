#include<iostream>
using namespace std;
int main(){

  enum Week{ MON, TUE, WED, THU, FRI, SAT, SUN};

  Week tody = MON;
  for(int i = MON; i<= SUN; i++){
      cout<<i<<" ";

  }
  return 0;

}