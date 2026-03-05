#include<iostream>
using namespace std;
class Shape
{
	public:
		   virtual void area()=0;
};
class rectangle:public Shape
{
	int length,breadth;
	public:
		   rectangle(int l,int b)
		   {
		   	length=l;
		   	breadth=b;
		   }
		   void area()
		   {
		   	cout<<"Area of rectangle:"<<length*breadth<<endl;
		   }
};
class circle:public Shape
{
	float radius;
	public:
		   circle(float r)
		   {
		   	radius=r;
		   }
		   void area()
		   {
		   	cout<<"Area of Circle:"<<3.14*radius*radius<<endl;
		   }
};
int main()
{
	Shape *s;
	rectangle r(2,3);
	s=&r;
	s->area();
	circle c(4.2);
	s=&c;
	s->area();
}

