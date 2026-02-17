#include<iostream>
using namespace std;
class Rectangle
{
	private:
		    int length;
		    int breadth;
	public:
		    int setLength(int l)//Mutator
		    {
		    	if(l>=0)
		    	  length=l;
		    	else
		    	  cout<<"length cannot be negative";
			}
			int setBreadth(int b)//Mutator
			{
				if(b>=0)
				  breadth=b;
				else
				  cout<<"Breadth cannot be negative";
			}
			int getLength()//Accessor
			{
				return length;
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
	Rectangle r;
	r.setLength(10);
	r.setBreadth(20);
	cout<<"Length is:"<<r.getLength()<<endl;
	cout<<"Breadth is:"<<r.getBreadth()<<endl;
	cout<<"Area is:"<<r.area()<<endl;
	cout<<"Perimeter is:"<<r.perimeter()<<endl;
	return 0;
}
//Mutator methods are used to set or modify the values of data members (like length and breadth). And also called as setter function
//Accessor methods are used to retrieve/read the values of data members. And also called as getter function
//Setter don't have to be limited to length and breadth they can modify any data member
//Getter usually don't modify data they just return it
