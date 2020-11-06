//program for manipulator
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a=100;
	float b=11.3333234;
	cout<<"hello"<<endl;
	cout<<"how are you"<<endl;
	cout<<setw (8)<<"hello"<<endl;
	cout<<setfill('*');
	cout<<setw(7)<<a<<endl;
	cout<<setprecision(2)<<b;
	return 0;
}
