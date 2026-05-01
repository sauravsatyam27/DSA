#include <iostream>
using namespace std;

// Node Structure
class Node {
public:
  int data;
  Node* next;

  Node(int val) {
    data = val;
    next = NULL;
  }
};

// Linked List Class
class LinkedList {
private:
  Node* head;

public:
  LinkedList() {
    head = NULL;
  }

  // Insert at end
  void insertAtEnd(int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
      head = newNode;
      return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newNode;
  }

  // ✅ Insert Between (at position)
  void insertBetween(int val, int pos) {
    Node* newNode = new Node(val);

    // Case 1: Insert at head
    if (pos == 1) {
      newNode->next = head;
      head = newNode;
      return;
    }

    // Traverse to (pos-1)th node
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
      temp = temp->next;
    }

    // If position is invalid (greater than length)
    if (temp == NULL) {
      cout << "Invalid position!" << endl;
      delete newNode;
      return;
    }

    // Insert new node
    newNode->next = temp->next;
    temp->next = newNode;
  }

  // Display the list
  void display() {
    Node* temp = head;
    while (temp != NULL) {
      cout << temp->data << " -> ";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
};

// Main Function
int main() {
  LinkedList list;

  list.insertAtEnd(10);
  list.insertAtEnd(20);
  list.insertAtEnd(30);
  list.insertAtEnd(40);

  cout << "Before insertion:" << endl;
  list.display();

  list.insertBetween(25, 3); // Insert 25 at position 3

  cout << "After insertion:" << endl;
  list.display();

  return 0;
}
