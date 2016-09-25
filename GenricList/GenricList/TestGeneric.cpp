#include <iostream>
using namespace std;
#include "List.h"

int main()
{
	List<int> marks;

	marks.addNode(5);
	marks.addNode(1);
	marks.addNode(7);

	marks.printForward();


}