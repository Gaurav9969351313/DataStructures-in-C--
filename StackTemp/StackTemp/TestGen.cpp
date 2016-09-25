#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	 Stack<int> si(3);
	 Stack<float> sf(3);

	 sf.push(1.1);
	 sf.push(1.2);
	 sf.push(1.3);

		si.push(1);
		si.push(2);
		si.push(3);

		for (int i = 0; i < 3; i++)
		{
			cout<<"poped elements are from S(int)"<<si.pop()<<endl;
		}
		

		for (int i = 0; i < 3; i++)
		{
			cout<<"poped elements are from S(Float)"<<sf.pop()<<endl;

		}

}