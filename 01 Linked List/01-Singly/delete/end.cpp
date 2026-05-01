#include<iostream>
using namespace std;

class Node{
  public:
   int data;
   Node* next;

   Node(int val){
    data = val;
    next = nullptr;
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

        if ( head == NULL) {
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


    void delEnd(){

           if (head == nullptr) {
        cout << "List is empty, nothing to delete.\n";
        return;
      }

         if (head->next == nullptr) {
            cout << "Deleting: " << head->data << endl;
            delete head;
            head = nullptr;
            return;
        }


      Node* del = head;
      while(del -> next ->next != nullptr){
        del = del->next;
      }

          delete del->next;
        del->next = nullptr;


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

    list.delEnd();

   cout << "Linked List: ";
    list.display();
}