#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter Marks:";
	cin>>marks;
	if(marks>=40)
	{
		cout<<"Pass";
		if(marks>=75)
		{
			cout<<" With Distinction";
		}
	}
	else
	{
		cout<<"Fail";
	}
	return 0;
}
