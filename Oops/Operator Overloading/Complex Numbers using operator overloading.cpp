#include<iostream>
using namespace std;
class complex
{
	private:
		    int real;
		    int img;
    public:
    	  complex(int r=0,int i=0)
    	  {
    	  	real=r;
    	  	img=i;
		  }
		  complex operator+(complex x)
		  {
		  	complex temp;
		  	temp.real=real+x.real;
		  	temp.img=img+x.img;
		  	return temp;
		  }
		  void display()
		  {
		  	cout<<real<<"+"<<img<<"i"<<endl;
		  }
};
int main()
{
	complex c1(2,3);
	complex c2(4,5);
	complex c3;
	//c3=c1.add(c2);//In this add function is called upon c1 and c2 is going as parameter
	//c3=c2.add(c1);//In this add function is called upon c2 and c1 is going as parameter and if i uncomment this line the output will be same
	c3=c1+c2;
	c3.display();
	return 0;
}
