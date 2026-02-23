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
		   friend ostream &operator<<(ostream &out,complex &c1);
};
ostream &operator<<(ostream &out,complex &c1)
{
	out<<c1.real<<"+"<<c1.img<<"i";
}
int main()
{
	complex c1(3,7);
	cout<<c1;
	return 0;
}
