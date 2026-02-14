#include<iostream>
using namespace std;
void show(int a=0,int b=20)
{
	cout<<a+b<<endl;
}
void show(double a)
{
	cout<<a*2<<endl;
}
int main()
{
	show(0);
	show(5);
	show(5,5);
	show(5.5);
}
