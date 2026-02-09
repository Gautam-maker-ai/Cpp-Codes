#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p=&a;
	cout<<a<<endl;//Value of a 
	cout<<&a<<endl;//Address of a
	cout<<p<<endl;//Address of a
	cout<<&p<<endl;//Address of pointer p (Also dependent on machine)
	cout<<*p<<endl;//Value of a
	return 0;
}
