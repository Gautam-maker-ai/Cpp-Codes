#include<iostream>
using namespace std;
class Shape
{
	public:
		   int length;
};
class Rectangle:public Shape
{
	public:
		   int breadth;
		   void getLength()
		   {
		   	cout<<"Enter Length:";
		   	cin>>length;
		   }
		   void getBreadth()
		   {
		   	cout<<"\nEnter Breadth:";
		   	cin>>breadth;
		   }
		   int area()
		   {
		   	return length*breadth;
		   }
};
int main()
{
	Rectangle r;
	r.getLength();
	r.getBreadth();
	cout<<"Area Is:"<<r.area();
	return 0;
}
//Specialisation means creating derived (child) classes from a base class by adding or modifying features.
