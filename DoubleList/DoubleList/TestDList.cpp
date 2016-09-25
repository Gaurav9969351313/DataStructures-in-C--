using namespace std;
#include <iostream>
#include <string>
#include "List.h"

int  main()
{
	List marklist;
	marklist.addNode(5);
	marklist.addNode(1);
	marklist.addNode(7);

	    marklist.printBackword();
		marklist.printForward();

		marklist.deleteAll();
	marklist.printBackword();

}
