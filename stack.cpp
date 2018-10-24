#include <iostream>
#include "stack.h"
using namespace std;

Stack::Stack()
{
  top = nullptr;
}

void Stack::Push(int data){
   top = new Node(data, top);
};

void Stack::Pop(){
  Node *temp = top;
  top = top->next;
  delete temp;
  return;
}


Stack::~Stack() {
  while (top!=nullptr){
    Node *temp = top;
    top = top->next;
    delete temp;
  }
}



