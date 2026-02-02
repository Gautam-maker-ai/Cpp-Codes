#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"Enter Day:";
	cin>>day;
	if(day>=1 && day<=7)
	{
		if(day==6 || day==7)
		{
			cout<<"Weekend";
		}
		else
		{
			cout<<"Weekday";
		}
	}
	else
	{
		cout<<"Invalid day";
	}
	return 0;
}
