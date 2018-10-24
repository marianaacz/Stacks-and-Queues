#ifndef NODE_H
#define NODE_H

struct Node {
  Node *next;
  int data;
  Node(int data, Node *next){
    this->data = data;
    this->next = next;
  }
};

#endif