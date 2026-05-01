#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = nullptr;
  }
};

class LinkedList
{

private:
  Node *head;

public:
  LinkedList()
  {
    head = nullptr;
  }

  // insert beg

  void insertBegin(int val)
  {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
  }

  void deleteFront(){
        if (head == nullptr) {
        cout << "List is empty, nothing to delete.\n";
        return;
    }
    Node *del = head;
    head = head->next;
    delete(del);
  }

  void display()
  {
    Node *temp = head;
    while (temp != nullptr)
    {
      cout << temp->data << " -> ";
      temp = temp->next;
    }
    cout << "NULL\n";
  }
};

int main()
{

  LinkedList list;

  list.insertBegin(13);
  list.insertBegin(3);
  list.insertBegin(6);
  list.insertBegin(2);
  list.insertBegin(65);
  list.insertBegin(4);
  list.insertBegin(5);

  list.deleteFront();
  list.deleteFront();


  cout << "Linked List: ";
  list.display();
  return 0;
}