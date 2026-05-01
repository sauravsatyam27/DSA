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

class Queue
{

  Node *head;
  Node *tail;

public:
  Queue()
  {
    head = tail = NULL;
  }

  // ADD value Enqeue

  void push(int val)
  {
    Node *newNode = new Node(val);
    if (empty())
    {
      head = tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
  }

void pop() {
    if (empty()) {
        cout << "Queue is empty\n";
        return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;

    if (head == nullptr)  
        tail = nullptr;
}


  int front()
  {
    int a = head->data;
    cout << a;
  }

  bool empty()
  {
    return head == nullptr;
  }

  void display()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " -> ";
      temp = temp->next;
    }
    cout << "NULL\n";
  }
};

int main()
{
  Queue q;
  q.push(3);
  q.push(2);
  q.push(5);
  q.push(38);
  q.pop();
  q.display();

  return 0;
}