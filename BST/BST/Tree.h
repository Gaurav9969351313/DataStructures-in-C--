#include <iostream>
using namespace std;
#pragma once

template <class T>
struct Node
{
	Node<T> *left;
	T value;
	Node<T> *right;

	Node<T>(T v)
	{
		value=v;
		left=right=NULL;
	}
};

template <class T>
class Tree
{
private:
	Node<T> *root;


	Node<T> * addNode(Node<T> *n, int v)
	{
		if(!n)
		  return new Node<T>(v);

		if(v>n->value)
			n->right=addNode(n->right,v);
		else 
			n->left=addNode(n->left,v);

		return n;
	}


	void inorder(Node<T> *n)
	{
		if(n)
		{
			inorder(n->left);
			cout <<n->value << endl;
			inorder(n->right);
		}
	}

	bool deleteTree(Node<T> *n)
	{
		if (n)
		{
			
			deleteTree(n->left);
			deleteTree(n->right);
			cout <<"deleting node "<< n->value<< endl;
			delete n;
				//root=NULL;
			return true;
		}
		return false;
	}
		//node ka left(5 replac *) uska rightmost(12) uska left (11)(going to becone a new root)
	// is having value then make that(11) to the right of previous(10) and  tuta hua pointing to root the right most is a replace pointer
public:

	float val;
	 int stop;


	//int val;
	Tree(void)
	{
		root=NULL;
		//val=1;
	}

	void add(T v)
	{
		root=addNode(root,v);
	} 			

	void print()
	{
		cout <<"Printing forword"<< endl;
		inorder(root);
	} 

	void deleteAll()
	{
		deleteTree(root);
		root = NULL;
	}

	~Tree(void)
	{
		deleteTree(root);
	}
};

