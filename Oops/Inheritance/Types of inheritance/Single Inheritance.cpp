//Single Inheritance
#include<iostream>
using namespace std;
class Base
{
	public:
		  void show()
		  {
		  	cout<<"Function of Base Class"<<endl;
		  }
};
class Derived:public Base
{
	public:
		   void display()
		   {
		   	cout<<"Function of Derived Class";
		   }
};
int main()
{
	Derived d;
	d.show();
	d.display();
	return 0;
}
