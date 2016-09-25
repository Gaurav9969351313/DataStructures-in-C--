#pragma once

class Stack
{
private: 
	int *p;
	int size;
	int top;

public:
	//Stack();
	Stack(int size =! 0);

	void push(int);
	int pop();
	~Stack(void);
};

