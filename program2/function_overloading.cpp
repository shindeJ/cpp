#include<iostream>
using namespace std;
int add(int,int);
int add(int ,int ,int);

int main()
{
	int a,b,c,d;
	cout<<"enter value of a,b and c"<<endl;
	cin>>a>>b>>c;
	
	d=add(a,b);
	cout<<"addition of two number"<<endl;
	cout<<d<<endl;

	d=add(a,b,c);
	cout<<"addition of three number"<<endl;
	cout<<d;
	return 0;
}

int add(int x, int y)

{
	return (x+y);
	
}
int add(int p,int q,int r)
{
	return (p+q+r);
}
