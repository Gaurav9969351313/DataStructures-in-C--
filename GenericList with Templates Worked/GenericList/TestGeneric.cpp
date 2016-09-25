#include <iostream>
#include "List.h"
//template <class T>

int main()
{
	int userval, i;
	List<int> lobj;
	while (cout << "\nEnter 0 to stop :", cin >>  userval, userval)
		lobj.addNode(userval);
	lobj.printForward();

	cout << endl << "Enter Delete the node value : ";
	cin >> i;
	lobj.deleteNode(i);
	cout << endl << "Node deleted :\n"<<i;
	lobj.printForward();
	//lobj.addNode(userval);

	//iobj.deleteNode();
}
