#include<String>
#include<iostream>
#include "List.h"
using namespace std;

int main()
{
	List marklist;
	marklist.addNode(5);
	marklist.addNode(1);
	marklist.addNode(7);

	marklist.printForward();
}