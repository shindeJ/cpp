//program for call by value
#include<iostream>
using namespace std;

void change(int num);

int main()
{
	int num=10;
	cout<<"value main in"<<num<<endl;
	change(num);
	cout<<"value of after function colling is="<<num<<endl;
	return 0;
	
}

void change(int num)
{
	num=20;
	cout<<"value of change function in="<<num<<endl;
}
