#include<iostream>
using namespace std;
class Rectangle
{
	private:
		    int length;
		    int breadth;
	public:
		   Rectangle()//Default Constructor
		   {
		   	length=0;
		   	breadth=0;
		   }
		   
		   Rectangle(int l,int b)//Parameterised Constructor
		   {
		   	setLength(10);
		   	setBreadth(20);
		   }
		   
		   Rectangle(Rectangle &Rect)//Copy Constructor
		   {
		   	length=Rect.length;
		   	breadth=Rect.breadth;
		   }
		   
		   int setLength(int l)
		   {
		   	if(l>0)
		   	{
		   		length=l;
			}
			else
			{
				cout<<"Length cannot be -ve";
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
				cout<<"Breadth cannot be -ve";
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
};
int main()
{
	//Rectangle r;//Calling of Default Constructor
	//Rectangle r(5,6);//Calling of Parameterised Constructor
	Rectangle r(5,6);//Calling of Copy Construuctor
	Rectangle r1(r);
	
//	cout<<"Length is:"<<r.getLength()<<endl;
//	cout<<"Breadth is:"<<r.getBreadth()<<endl;
//	cout<<"Area is:"<<r.area()<<endl;
//	cout<<"Perimeter is:"<<r.perimeter()<<endl;
	
	//---------For Copy Constrcutor only----------
	cout<<"Length is:"<<r1.getLength()<<endl;
	cout<<"Breadth is:"<<r1.getBreadth()<<endl;
	cout<<"Area is:"<<r1.area()<<endl;
	cout<<"Perimeter is:"<<r1.perimeter()<<endl;
}
