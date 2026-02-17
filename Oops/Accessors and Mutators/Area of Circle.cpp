#include<iostream>
#include<cmath>
#include<stdexcept>
using namespace std;
class Circle
{
	private:
		    double radius;
		    double area;
		    bool isAreaCal;
	public:
		   Circle()
		   {
		      radius=0;
		   	  area=0;
		   	  isAreaCal=false;
		   }
		   void setRadius(double r)//Mutator
		   {
		   	 if(r<0)
		   	 {
		   		 throw invalid_argument("Radius must not be negative");
			 }
			 radius=r;
			 isAreaCal=false;
		   }
		   double getArea()//Accessor
		   {
		   	if(!isAreaCal)
		   	{
		   		const double PI=3.145;
		   		area=PI*radius*radius;
		   		isAreaCal=true;
		    }
		    return area;
		   }
};
int main()
{
	Circle c;
	try
	{
		c.setRadius(5);
		cout<<"Area of Circle is:"<<c.getArea()<<endl;
		cout<<"Area Again (Cached)"<<c.getArea()<<endl;
	}
	catch(exception &e)
	{
		cout<<e.what()<<endl;;
	}
	return 0;
}
