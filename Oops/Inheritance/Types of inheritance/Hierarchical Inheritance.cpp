//Hierarchical Inheritance
#include<iostream>
using namespace std;
class shape
{
	public:
		   void show()
		   {
		   	cout<<"This is a shape"<<endl;
		   }
		   
};
class Rectangle:public shape
{
	private:
		   int length;
		   int breadth;
    public:
    	   Rectangle(int l=0,int b=0)
    	   {
    	   	length=l;
    	   	breadth=b;
		   }
		   int area()
		   {
		   	return length*breadth;
		   }
};
class Circle:public shape
{
	private:
		    int radius;
	public:
		   Circle(int r=0)
		   {
		   	radius=r;
		   }
		   float area()
		   {
		   	return 3.14*radius*radius;
		   }
};
class Quadilateral:public shape
{
	private:
		    int side;
	public:
		   Quadilateral(int s=0)
		   {
		   	side=s;
		   }
		   int area()
		   {
		   	return side*side;
		   }
};
int main()
{
	Rectangle r(3,2);
	Circle c(2.);
	Quadilateral q(2);
	r.show();
	cout<<"Rectangle Area is:"<<r.area()<<endl;
	
	c.show();
	cout<<"Circle Area is:"<<c.area()<<endl;
	
	q.show();
	cout<<"Quadilateral Area is:"<<q.area();
	
	return 0;
}
