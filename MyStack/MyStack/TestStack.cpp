#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack s1(10);
	
	s1.push(10);
	s1.push(9);
	s1.push(8);
	s1.push(7);
	s1.push(6);
	s1.push(5);
	s1.push(4);
	s1.push(3);
	s1.push(2); 
	s1.push(1);

	for (int i = 0; i < 10; i++)
	{
		cout<<"entered in stack="<<s1.pop()<<endl;
	}
}