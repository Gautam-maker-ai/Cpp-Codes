#include<iostream>
using namespace std;
int main()
{
	float temp;
	cout<<"Enter Temperature:";
	cin>>temp;
	if(temp<=0)
	{
		cout<<"Freezing";
	}
	else if(temp<=15)
	{
		cout<<"Cold";
	}
	else if(temp<=30)
	{
		cout<<"Normal";
	}
	else if(temp<=45)
	{
		cout<<"Hot";
	}
	else
	{
		cout<<"Very Hot";
	}
	return 0;
}
