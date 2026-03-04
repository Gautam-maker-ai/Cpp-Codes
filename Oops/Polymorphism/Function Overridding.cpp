#include<iostream>
using namespace std;
class Base
{
	public:
		  void fun()
		  {
		  	cout<<"Base class function"<<endl;
		  }
};
class Derived:public Base
{
	public:
		   void fun()
		   {
		   	cout<<"Derived class function"<<endl;
		   }
};
int main()
{
	Base b;
	b.fun();//Base class function will be called here
	Derived d;
	d.fun();//Derived class function will be called here
}
//This program demonstrates function overriding.
//Since the base class function is not declared as virtual, the binding happens at compile time (static binding).

