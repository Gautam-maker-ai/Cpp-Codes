#include<iostream>
using namespace std;
class Rectangle
{
	public:
		   int length;
		   int breadth;
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
	Rectangle r1,r2;
	r1.length=10;
	r1.breadth=20;
	r2.length=20;
	r2.breadth=30;
	cout<<"r1 area is:"<<r1.area()<<endl;
	cout<<"r1 perimeter is:"<<r1.perimeter()<<endl;
	cout<<"r2 area is:"<<r2.area()<<endl;
	cout<<"r2 perimeter is:"<<r2.perimeter()<<endl;
	return 0;
}

