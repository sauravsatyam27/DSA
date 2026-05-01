#include<iostream>
using namespace std;

// Node structure

class Node{
  public:
      int data;
      Node* next;

      // constructor

      Node(int val){
        data = val;
        next = NULL;
      }
};


// Linked List Class

class LinkedList{
  private :
      Node* head;

  public:    

    LinkedList(){
      head = NULL;
    }

    // Insert Begin

    void insertBegin(int val){
      Node* newNode = new Node(val);
      newNode -> next = head;
      head = newNode;
    }


    //Display

    void display(){
      Node* temp = head;
      while(temp!= NULL){
        cout<< temp->data<<" -> ";
        temp = temp->next;
      }
        cout << "NULL\n";
    }
};


int main(){

  LinkedList list;

  list.insertBegin(5);

      cout << "Linked List: ";
      list.display();

    return 0;  
}

// 

