#include<iostream>
#include "List.h"
using namespace std;

int main()
{
	List marklist;
	int i,j,k=0;
	cout<<"how many values to enter"<<endl;
	cin>>j;

	for (int i = 0; i < j; i++)
	{
		cout<<"Enter A value to done=";
		cin>>k;
		marklist.addToFront(k);
	}

	marklist.printForward();
	marklist.printBackward();

	marklist.deleteNode1();
	marklist.printForward();
}