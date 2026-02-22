#include<iostream>
using namespace std;
class Rectangle
{
	private:
		    int length;
		    int breadth;
	public:
		   Rectangle(int length, int breadth)
		   {
		   	 this->length=length;
		   	 this->breadth=breadth;
		   }
		   void setLength(int l)
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
		   void setBreadth(int b)
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
		   int getBreadth()//Accessor
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
	Rectangle r(10,20);
	cout<<"Area is:"<<r.area()<<endl;
	cout<<"Perimeter is:"<<r.perimeter()<<endl;
	return 0;
}
//lets suppose our private data members are int length,int breadth.
//Now if we pass parameters of contructor same as data members int length,int breadth so there will ambiguity 
//To remove this ambiguity we use this pointer 
//And it will be treated as r.length=length and r.breadth=breadth
