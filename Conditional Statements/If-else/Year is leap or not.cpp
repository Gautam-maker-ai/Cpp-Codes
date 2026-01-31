#include<iostream>
using namespace std;
int main()
{
	int Y;
	cout<<"Enter Year:";
	cin>>Y;
	if(Y%4==0)
	{
		cout<<"Year is Leap";
	}
	else
	{
		cout<<"Year is Not leap";
	}
	return 0;
}
