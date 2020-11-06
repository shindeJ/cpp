#include<iostream>
using namespace std;

class demo
{
	private:
	void set()
	{
		cout<<"this is private set method"<<endl;
		
	}
	
	protected:
		void put()
		{
			cout<<"this is protected put method"<<endl;
			
		}
		
		friend void show();
		
      		
};
       void show()
       {
       	cout<<"this is friend function in show method"<<endl;
       	demo d;
       	d.set();
       	d.put();
       	
	   }
	   
	   int main()
	   {
	   	cout<<"main start"<<endl;
	   	cout<<"calling friend function"<<endl;
	   	show();
	   }








