#include<iostream>
using namespace std;
class Base
{
	public:
		   int x;
		   void show()
		   {
		   	cout<<x<<endl;
		   }
};
class Derived:public Base
{
	public:
		   int y;
		   void display()
		   {
		   	cout<<y<<endl;
		   }
};
int main()
{
	Base b;//Here object b is made of the base class 
	b.x=25;
	b.show();
	
	Derived d;//As we have define the base class public so we can call the show function as well as display function 
	d.x=30;
	d.y=40;
	d.show();
	d.display();
}
//Difference Between Available & Accessible
//Available
//a).If the class derived is inheriting from the base class then everything from the base class will be available in the derived class
//Accessible
//a).Everything of base class is available in the derived class but if we talk about accessible the private members of the base class is not accessible in the 
//derived class they are only accessible in base class only
//There is only way to access the private members is using mutators but directly we cannot.
