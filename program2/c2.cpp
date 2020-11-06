//program for inline function

#include<iostream>
using namespace std;

inline int add(int a,int b)
{
	return (a+b);
}

inline int mul(int a,int b)
{
	return (a*b);
}

int main()
{
	int a=10;
	int b=20;
	cout<<"addition of two number="<<add(a,b)<<endl;
	cout<<"multiplication of two number="<<mul(a,b);
	return 0;
}
