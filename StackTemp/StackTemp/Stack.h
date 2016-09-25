#pragma once

template <class T> //template declaration with user defined templates
class Stack
{
private: 
	T *p;
	int size;
	int top;

public:
	Stack(int s)
	{
		p = new T[s];	// m assiging / allocating a memory by using a variable of class t which is nothing but the object instatiation with its datatype
		size = s;
		top = -1;
	}

	void push(T v)
	{
		if (top==size-1)
		{
			throw "stack overflow";
		}
		p[++top] = v;
	}

	T pop()
	{

		if (top==-1)
		{
			throw "Stack Underlow";
		}
		return p[top--];
	}

	~Stack(void)
	{
		delete[] p;
	}   
};



