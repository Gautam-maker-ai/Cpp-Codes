#include<iostream>
using namespace std;
class car
{
	public:
		   virtual void start()
		   {
		   	cout<<"Car Started"<<endl;
		   }
		   virtual void stop()
		   {
		   	cout<<"Car Stopped"<<endl;
		   }
};
class innova:public car
{
	public:
		   void start()
		   {
		   	cout<<"Innova Started"<<endl;
		   }
		   void stop()
		   {
		   	cout<<"Innova Stopped"<<endl;
		   }
};
class fortuner:public car
{
	public:
		   void start()
		   {
		   	cout<<"Fortuner Started"<<endl;
		   }
		   void stop()
		   {
		   	cout<<"Fortuner Stopped"<<endl;
		   }
};
int main()
{
	car *p=new innova();
	p->start();
	p->stop();
	p=new fortuner();
	p->start();
	p->stop();
}
// Runtime polymorphism: base class pointer calls derived class functions at runtime
