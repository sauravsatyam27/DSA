#include<iostream>
using namespace std;

// Node Structure

class Node{
  public:
      int data;
      Node* next;

      // Constructor
     
     Node(int val){
      data = val;
      next = NULL;
   } 
};


// Linked List Class

class LinkedList {
private:
    Node* head;

public:
    // constructor
    LinkedList() {
        head = NULL;
    }

    // Insert at End
    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
          temp = temp -> next;
        }
        temp ->next= newNode;
    }

      void insertBegin(int val)
      {
        Node* newNode = new Node(val);
        newNode -> next = head;
        head = newNode;
     }

    // Display

    void display(){
      Node* temp = head;
      while(temp != NULL){
        cout<< temp->data<< " -> ";
        temp = temp->next;
      }
      cout << "NULL\n";
    }
};


int main(){

  LinkedList list;
  list.insertEnd(14);
  list.insertBegin(30);
  list.insertEnd(19);
  list.insertBegin(20);

   cout << "Linked List: ";
    list.display();
  
  return 0;
}