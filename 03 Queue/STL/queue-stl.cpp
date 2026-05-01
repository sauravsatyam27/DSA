#include<iostream>
using namespace std;
#include<queue>

int main(){

  deque<int>dq;

  dq.push_back(2);
  dq.push_back(12);
  dq.push_back(23);
  dq.push_back(4);
  dq.push_back(3);

  dq.push_front(0);
 
  cout<< dq.front() << " "<< dq.back() << endl;
  
  for (int x : dq)
    cout << x << " ";

  return 0;
  // 3,4,5,7,8,9 16 18
}