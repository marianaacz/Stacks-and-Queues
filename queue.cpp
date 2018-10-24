#include "queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {
  front = nullptr;
  rear = nullptr;
}
void Queue::append (int data){
  if (rear == nullptr){
      rear = new Node(data, rear);
      front = rear;
  }
  else {
       rear->next = new Node(data, nullptr);
       rear= rear->next;
  }

};
bool Queue:: empty(){
  return front == nullptr;
}


void Queue::serve(){
if (front == nullptr) {
    cout << "overflow" << endl;
  }
  else {
  front = front->next;
  }
};

Queue::~Queue(){
  while (front!=nullptr){
    Node *temp = front;
    front = front->next;
    delete temp;
  }
}