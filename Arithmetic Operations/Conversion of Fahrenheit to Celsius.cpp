#include<iostream>
using namespace std;
int main()
{
	float f,c;
	cout<<"Enter Temperature in Fahrenheit:";
	cin>>f;
	c=(f-32)*5/9;
	cout<<"Temperature In Celsius:"<<c<<endl;
	return 0;
}
