#include<iostream>
using namespace std;
template <class T>
T myMax(T x,T y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int c=myMax(10,5);
	float d=myMax(1.5f,2.5f);
	double e=myMax(2.34567,4.33332);
	cout<<"Integer Maximum is:"<<c<<endl;
	cout<<"Float Maximum is:"<<d<<endl;
	cout<<"Double Maximum is:"<<e<<endl;
}
