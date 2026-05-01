#include<iostream>
using namespace std;

class CircularQueue{
  int* arr;
  int cap;
  int f,r;
   int curSize = 0;

  public:
  CircularQueue(int size){
    cap = size;

    arr  = new int [cap];
    f = 0;
    r = -1;
  }

  void push(int data){
    if(curSize == cap){
      cout<< "CQ is full";
      return;
    }
    r = ( r + 1 ) % cap;
    arr[r] = data;
    curSize++;

  }

  void pop(){
    if(isEmpty()){
       cout<< "CQ is empty";
      return;
    }
    f = (f + 1) % cap;
    curSize--;
  }

  int front(){
    if(isEmpty()){
       cout<< "CQ is empty";
      return -1;
    }

    return arr[f];
  }

  bool isEmpty(){
    return curSize == 0;
  }

  void print(){
    for(int i = 0;i<cap; i++){
      cout<<arr[i]<< " ";
    }
  }

};

int main(){
  CircularQueue q(4);
  q.push(4);
  q.push(5);
  q.push(7);
  q.push(8);


  cout << "Front: " << q.front() << endl;
  cout << "EMpty: " << q.isEmpty() << endl;

  q.print();
  q.pop();
  q.print();

  return 0;

}