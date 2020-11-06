#include<iostream>
using namespace std;

class test
{
	int a,b;
	public:
		test()
		{
			cout<<"this is default constructor"<<endl;
			
		}
		test (int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b;
		}
};


int main()
{
	test t;
	test t1(10,20);
	t1.display();
	return 0;
}





