#include<iostream>
#include"Tree.h"

using namespace std;

int main()
{
	Tree<int>  t;
	Tree<float> t1;
	
	 t1.val=1;
	 t1.stop=1;
	while (t1.stop!=0)
	{   
		cout << "Enter values(ZERO to Stop)= ";
		cin >> t1.val;
		t1.stop=t1.val;
		if (t1.stop==0)
			break;
       t1.add(t1.val);
	}
	t1.print();
	t1.deleteAll();
	t1.print();
}