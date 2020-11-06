//program for call by refrence
#include<iostream>
using namespace std;

void swap(int *a,int *b);

int main()
{
	int a=10;
	int b=20;
	
	cout<<"before swapping value is=";
	cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
	swap(&a,&b);
	cout<<"after swapping value is= ";
	cout<<"a="<<a<<"\t"<<"b"<<b;
	return 0;	
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
	
	
	
	
	
	
	
}
