#include<iostream>
using namespace std;
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
int main()
{
	int a=10,b=20;
	cout<<"Addition is:"<<add(a,b);
	return 0;
}
