#include<iostream>
using namespace std;
class Parent
{
	public:
		   virtual void fun()
		   {
		   	cout<<"Fun of Parent class"<<endl;
		   }
};
class Child:public Parent
{
	public:
		   void fun()
		   {
		   	cout<<"Fun of Child class"<<endl;
		   }
};
int main()
{
	Child c;
	Parent *p=&c;
	p->fun();
}
//1.If the function in the base class is normal (not virtual), then calling it through a base class pointer will execute the base class version of the function.
//2.If the function in the base class is declared as virtual, then calling it through a base class pointer will execute the child (derived) class version of the function
//provided that the pointer is pointing to a child class object.
//3.Virtual function is used to achieve runtime polymorphism(Late Binding)
