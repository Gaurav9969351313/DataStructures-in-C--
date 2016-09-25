#pragma once
#include<String>
#include<iostream>
using namespace std;

struct Node 
{
	int value;
	struct Node *next;
	Node(int v)
	{
		value= v;
		next = NULL;
	}
};

class List
{
private:
	Node *head;
	Node *tail;
public:

	List()
	{
		head=NULL;
		tail=NULL;
	}

	void addNode(int v)
	{
		Node *n = new Node(v);
		if(NULL==head)
			head=NULL;
		else
		{
			tail->next=n;
		}
		tail=NULL;
	}

	void printForward()
	{
		Node *p;
		for (p = head; p != NULL; p=p->next)
		{
			cout<<"Entered Records"<<p->value<<endl;
		}
	}

	~List()
	{
	}
	
};

