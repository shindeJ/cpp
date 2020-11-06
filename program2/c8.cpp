//program for default argument
#include<iostream>
using namespace std;
int main()
{
	int disp(int a,float b=12.32);
	disp(10);
	return 0;
	
}

int disp(int a,float b)
{
	cout<<"integer a="<<a<<endl;
	cout<<"float b="<<b;
}
