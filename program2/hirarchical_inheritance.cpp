
#include<iostream>
using namespace std;

class A
{
	protected:
		int a;

	public:
		void get_a()
		{
		  	cout<<"enter value of a="<<endl;
		  	cin>>a;
		}
};

class B 
{
	protected:
		int b;

		public:
			void get_b()
			{
			cout<<"enter value of b="<<endl;
			cin>>b;
			}
};
class C: public B,public A
{
	protected:
		int c;

		public:
			void get_c()
			{
			cout<<	"enter value of c="<<endl;
			cin>>c;
			}
};
class D :public C
{
	public:
		void add()
		{
		
		get_a();
		get_b();
		get_c();
		cout<<"addition of three number is="<<a+b+c<<endl;
	}
};

int main()
{

D d;
d.add();
return 0;

}









