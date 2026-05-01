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

void delBetween(int n) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    // Case 1: delete first node
    if (n == 1) {
        Node* del = head;
        head = head->next;
        cout << "Deleting: " << del->data << endl;
        delete del;
        return;
    }

    // Traverse to (n-1)th node for counting the nodes
    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < n - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of range.\n";
        return;
    }

    Node* del = temp->next;
    temp->next = temp->next->next;
    cout << "Deleting: " << del->data << endl;
    delete del;
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

int n;
  cout<<"Enter Position to delete";
  cin>>n;
   list.delBetween(n);

   cout << "Linked List: ";
    list.display();
}