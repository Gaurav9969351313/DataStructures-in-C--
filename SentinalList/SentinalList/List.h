#pragma once
#include<String>
#include<iostream>
using namespace std;



struct Node 
{
	Node *prev;
	int value;
	Node *next;
	Node(int v)
	{
		value= v;
		next = NULL;
	}
};

class List
{
private:
	Node * head;
	Node * tail;
public:



	List(void)
	{
		head = new Node(0);
		tail=new Node(0);
		head->next = tail;
		tail->prev=head;
	}

	void addToBack(int v)
	{
		Node *p = new Node(v);
		p->next = tail;
		p->prev = tail->prev;
		tail->prev->next = p;
		tail->prev=p;
	}

	void addToFront(int v)
	{
		Node *p = new Node(v);
		p->prev = head;


		/*p->prev = head->next;
		head->prev->next = p;
		head->next = p;*/
	}

bool deleteNode1()
{  
	int v=0;
	cout << "Enter element to del"<<endl;
	cin>>v;
	for (Node *p=head->next; p!=tail;  p=p->next)
	{
		if (p->value==v)
		{
			p->prev->next = p->next;
			p->next->prev = p->prev;
			delete p;
			return true;
		}
   }
 
			cout<<"Element not found"<<endl;
}

	void printForward()
	{
		Node *p;
		for (p = head->next; p != tail; p=p->next)
		{
			cout<<"Entered Records= "<<p->value<<endl;
		}
	}

	void printBackward()
	{
		Node *p;
		for (p =tail->prev; p != head; p=p->prev)
		{
			cout<<"Entered Records= "<<p->value<<endl;
		}
	}
	~List(void)
	{
	}
};

