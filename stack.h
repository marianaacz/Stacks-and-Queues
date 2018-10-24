#ifndef STACK_H
#define STACK_H

#include "Node.h"

class Stack
{
private:
  Node *top;

public:
	Stack();
	void Push(int data);
	void Pop();
  ~Stack();
	
};

#endif
