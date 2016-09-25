#include "Stack.h"
#include <string>

//Stack :: Stack()
//{
//	//size = NULL;
//}

Stack :: Stack(int s)
{
 p = new int[s];	
 size = s;
 top = -1;
}

void Stack :: push(int v)
{
	if (top==size-1)
	{
		throw "stack overflow";
	}
	p[++top] = v;
}

int Stack :: pop()
{

	if (top==-1)
	{
		throw "Stack Underlow";
	}
	return p[top--];
}
	
Stack::~Stack(void)
{
	delete[] p;
}
