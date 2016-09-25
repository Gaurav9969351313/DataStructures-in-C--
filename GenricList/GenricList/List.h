#pragma once
#include <iostream>
template <class T>

struct Node
{
	T value;
	Node *next;
	Node *prev;
	Node (T v)
	{ 
		value = v;
		prev = next = NULL;
	}
};

template <class T>
class List
{

private:
	Node *head;
	Node *tail;
public:

	List(void)
	{
		head=tail=NULL;
	}

	void addNode(T v)
	{
		T *n = new T(v);
		n->value = v;
		n->next = NUll;
		if (null==head)
		{
			head=n;
			tail=n;
		}
		else
		{
			tail->next = n;
			tail=n;
		}
	}

	void printForward()
	{
		for (struct Node *p = head ; p != NULL; p=p->next)
		{
			cout<<"Entered Records="<<p<<"  "<<p->value<<endl;
		}
	}

	~List(void)
	{
	}
};

