#pragma once
#include <iostream>
using namespace std;

template <class T>
struct Node
{
	Node<T>  *prev;
	Node<T>  *next;
	T value;

	Node(T v)
	{
		value = v;
		prev = next = NULL;
	}
};

template <class T>
class List
{
private:
	struct Node< T > * head ;
	struct Node< T > * tail ;
public:

	List()
	{
		head=NULL;
		tail=NULL;
	}

	~List(void)
	{
	}

	void addNode(T v)
	{
		Node <T> *n= new Node <T> (v);
		if (NULL == head)
		{
			head = tail = n;
		}
		else
		{
			tail->next = n;
			n->prev =tail;
			tail = n;
		}
	}

	void printForward()
	{
		//struct Node *p;
		cout << endl << "Forward List is :";
		for (Node<T> *p=head; p ; p=p->next)
			printf("%d\n", p->value);
	}

	void deleteList(Node <T>*p)
	{
		if (!p)
			return;
		deleteList(p->next);
		cout << "deleting at "<< p->value << endl;
		delete p;
		return;
	}

	void deleteAll()
	{
		deleteList(head);
		head = NULL;
		tail = NULL;
	}

	bool deleteNode(T v)
	{
		for (Node <T>*p = head; p; p = p->next)
		{
			if (p->value == v)
			{
				if (head == tail)
				{
					cout << endl << "Deleting head & tail :" << p->value;
					delete p;
					head = tail = NULL;
					return true;
				}

				if (p == head)
				{
					cout << "Deleting from head :" << p->value;
					head = head->next;
					delete p;
					head ->prev = NULL;
					return true;
				}

				if (p == tail)
				{
					cout << "Deleteing at tail :";
					tail = tail->prev;
					delete p;
					tail->next = NULL;
					return true;
				}

				cout << "Deleting in middle : " << p->value << endl;
				p->prev->next = p ->next;
				p->next->prev = p ->prev;
				delete p;
				return true;
			}
		}
		return false;
	}
};


