//program for friend function
#include<iostream>
using namespace std;
class demo
{
	private:
		void show()
		{
			cout<<"this is show method"<<endl;
		}
	protected:
		void disp()
	   {
		cout<<"this is display method "<<endl;
		}
	friend void friendfun();
		
};
  void friendfun()
  {
  	cout<<"this is friend function"<<endl;
  	demo d;
  	d.show();
  	d.disp();
  	
  }
  
  int main()
  {
  	cout<<"main starts"<<endl;
  	friendfun();
  	return 0;
  	
  }
