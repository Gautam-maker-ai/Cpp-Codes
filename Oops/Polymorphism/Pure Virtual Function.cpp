#include<iostream>
using namespace std;
class Car
{
	public:
		   virtual void start()=0;
};
class innova:public Car
{
	public:
		   void start()
		   {
		   	cout<<"Innova Started"<<endl;
		   }
};
class fortuner:public Car
{
	public:
		   void start()
		   {
		   	cout<<"Fortuner Started"<<endl;
		   }
};
int main()
{
	innova i;
	Car *c;
	c=&i;
	c->start();
	fortuner f;
	c=&f;
	c->start();	
}
// This program demonstrates an Abstract Class in C++.
// The Car class contains a pure virtual function start() which makes it an abstract class.
// Derived classes (innova and fortuner) implement the start() function.
// A base class pointer is used to achieve runtime polymorphism.
