//program for memory management operator
#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=new int;
	*p=100;
	cout<<"dynamically stored ="<<*p<<endl;
	cout<<"address of variable="<<p<<endl;
	
	delete p;
	return 0;
	
	
	
}
