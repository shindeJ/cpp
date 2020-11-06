#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
		
		test(int x,int y)
		{
			a=x;
			b=y;
		}
		void print()
		{
			cout<<a<<"  "<<b<<endl;
		}
		
		friend test operator +(test obj1,test obj2);
};

test operator +(test obj1,test obj2)
{

return test(obj1.a+obj2.a,obj1.b+obj2.b);
	
}

 int main()
{
	test t1(2,3);
	test t2(4,5);
	t1.print();
	t2.print();
	test t3=t1+t2;
	t3.print();
	return 0;
}








