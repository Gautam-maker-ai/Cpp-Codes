#include<iostream>
using namespace std;
int main()
{
	char signal;
	cout<<"Enter Signal:";
	cin>>signal;
	switch(signal)
	{
		case 'R': case 'r': cout<<"Stop"; break;
		case 'Y': case 'y': cout<<"Look"; break;
		case 'G': case 'g': cout<<"Go"; break;
		default:cout<<"Invalid Signal";
	}
	return 0;
}
