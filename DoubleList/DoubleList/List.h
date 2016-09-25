#pragma once
#include <iostream>

using namespace std;

struct Node 
{
	 Node *next;
	 int value;
	 Node *prev;

	Node(int v)
	{
		value= v;
		prev=next = NULL;
	}
};

class List
{
private:
	Node *head ;
	Node *tail;

	void deleteList(Node *p)
	{
		cout<<"delete list encountered"<<endl;
		if(!p)
			return;
		deleteList(p->next);
		delete p;
		return;
	}


public:

	List(void)
	{
		head = NULL;
		tail = NULL;
	}

	void addNode(int v)
	{
		Node *n = new Node(v);

		if (NULL==head)
		{
			head=tail=n;
		}
		else
		{
			tail->next=n;
			n->prev=tail;
			tail=n;
		}
	}

	void printForward()
	{
		Node *p;
		for (p = head; p != NULL; p=p->next)
		{
			cout<<"Printing forward =   "<<p->value<<endl;		
		}
	}

	void printBackword()
	{
		Node *p;
		for (p = tail; p != NULL; p=p->prev)
		{
			cout<<"printing backward= "<<p->value<<endl;
		}
	}



	void deleteAll()
	{
		/*Node *p;
		for (p = head; p != NULL; p=head)
		{
			head=head->next;
			delete p;
			cout<<"Deleting a value from="<<p<<p->value<<endl;
		}
		tail = NULL;*/

		cout<<"DeleteAll encountered"<<endl;
		deleteList(head);
		head = NULL;
		tail=NULL;
	}

	
};

