#include<iostream>
using namespace std;
class BasicCar
{
	public:
		   virtual void start()
		   {
		   	cout<<"Basic Car Starts"<<endl;
		   }
};
class AdvanceCar:public BasicCar
{
	public:
		   void start()
		   {
		   	cout<<"Advance Car Starts"<<endl;
		   }
};
int main()
{
	BasicCar *Bc=new AdvanceCar();
	Bc->start();
}
