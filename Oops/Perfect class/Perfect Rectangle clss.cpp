#include<iostream>
using namespace std;
class Rectangle
{
	private:
		    int length;
		    int breadth;
	public:
		   Rectangle(int l=0,int b=0)//Constructor
		   {
		   	setLength(l);
		   	setBreadth(b);
		   	cout<<"Rectangle Constructed"<<endl;
		   }
<<<<<<< HEAD
		   void setLength(int l)//Mutator
=======
		   void setLength(int l)
>>>>>>> bfbd9b7a17031782c7125fa2a010246547c844ab
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
		   int getLength()//Accessor
		   {
		   	return length;
		   }
<<<<<<< HEAD
		   void setBreadth(int b)//Mutator
=======
		   void setBreadth(int b)
>>>>>>> bfbd9b7a17031782c7125fa2a010246547c844ab
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
		   int area()//Facilitator
		   {
		   	return length*breadth;
		   }
		   int perimeter()//Facilitator
		   {
		   	return 2*(length+breadth);
		   }
		   bool isValid()//Enquiry
		   {
		   	return (length>0 && breadth>0)
		   }
		   ~Rectangle()//Destructor
		   {
		   	cout<<"Rectangle Destroyed";
		   }
};
int main()
{
	Rectangle r1(10,20);
	cout<<"Length is:"<<r1.getLength()<<endl;
	cout<<"Breadth is:"<<r1.getBreadth()<<endl;
	cout<<"Area is:"<<r1.area()<<endl;
	cout<<"Perimeter is:"<<r1.perimeter()<<endl;
	cout<<r1.isRectangle()<<endl;
	if(r1.isValid())
	{
		cout<<"Valid Rectangle"<<endl;;
	}
	else
	{
		cout<<"Invalid Rectangle"<<endl;
	}
	return 0;
	
}
//If You Are Writing Constructors, Accessors, Mutators, Facilitator, Enquiry, Destructors Then You Are Writing Perfect Class.
