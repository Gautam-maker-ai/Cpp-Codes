#include<iostream>
using namespace std;
class Rectangle
{
	private:
		    int length;
		    int breadth;
	public:
		   Rectangle(int l=0,int b=0)
		   {
		   	setLength(l);
		   	setBreadth(b);
		   	cout<<"Rectangle Constructed"<<endl;
		   }
		   int setLength(int l)
		   {
		   	if(l>0)
		   	{
		   		length=l;
			}
			else
			{
				cout<<"Length Cannot be negative";
			}
		   }
		   int getLength()
		   {
		   	return length;
		   }
		   int setBreadth(int b)
		   {
		   	if(b>0)
		   	{
		   		breadth=b;
			}
			else
			{
				cout<<"Breadth Cannot be negative";
			}
		   }
		   int getBreadth()
		   {
		   	return breadth;
		   }
		   int area()
		   {
		   	return length*breadth;
		   }
		   int perimeter()
		   {
		   	return 2*(length+breadth);
		   }
		   bool isRectangle()
		   {
		   	if(true)
		   	{
		   		cout<<"It is a Rectangle";
			}
			else
			{
				cout<<"Not a Rectangle";
		    }   
		   }
		   ~Rectangle()
		   {
		   	cout<<"Rectangle Destroyed";
		   }
};
int main()
{
	Rectangle r1(10,20);
	cout<<"Length is: "<<r1.getLength()<<endl;
	cout<<"Breadth is: "<<r1.getBreadth()<<endl;
	cout<<"Area is: "<<r1.area()<<endl;
	cout<<"Perimeter is: "<<r1.perimeter()<<endl;
	cout<<r1.isRectangle()<<endl;
	return 0;
	
}
