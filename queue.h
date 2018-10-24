#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"
class Queue
{
private: 
	Node *front;
  Node *rear;

public:
  Queue();
	void append(int data);
	void serve();
  bool empty();
  ~Queue();

};


#endif

